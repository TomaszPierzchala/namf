//
// Created by viciu on 08.06.2020.
//
#include "scheduler.h"


namespace SimpleScheduler {
    unsigned long nullF(LoopEventType event) { return 0; }


    NAMFScheduler::NAMFScheduler() {
        loopSize = 0;
        for (byte i = 0; i < SCHEDULER_SIZE; i++) {
            _tasks[i].process = nullF;
            _tasks[i].nextRun = 0;
            _tasks[i].slotID = EMPTY;

        }
    }

    void NAMFScheduler::process() {
        for (byte i = 0; i < SCHEDULER_SIZE; i++) {
            if (_tasks[i].nextRun && _tasks[i].nextRun < millis()) {
                unsigned long nextRun = _tasks[i].process(RUN);
                if (nextRun) {
                    _tasks[i].nextRun = millis() + nextRun;
                } else {
                    _tasks[i].nextRun = 0;
                }
            }

        }

    }

    void NAMFScheduler::init() {
        for (byte i = 0; i < SCHEDULER_SIZE; i++) {
            unsigned long nextRun = _tasks[i].process(INIT);
            if (nextRun) {
                _tasks[i].nextRun = millis() + nextRun;
            } else {
                _tasks[i].nextRun = 0;
            }

        }

    }

    int NAMFScheduler::registerSensor(byte slot, loopTimerFunc processF) {
        {
            if (loopSize + 1 >= SCHEDULER_SIZE)
                return -1;
            _tasks[loopSize].nextRun = 0;
            _tasks[loopSize].process = processF;

            loopSize += 1;
            //return idx
            return loopSize - 1;
        };
    }

//find scheduler entry based on sensor type (slot ID)
    int NAMFScheduler::findSlot(byte id) {
        for (byte i = 0; i < SCHEDULER_SIZE; i++) {
            if (_tasks[i].slotID == id)
                return i;
        }
        //no match
        return -1;

    }

    void NAMFScheduler::runIn(byte slot, unsigned long time, loopTimerFunc func) {
        int idx;
        idx = findSlot(slot);
        if (idx < 0) return;

        if (time > 0) {
            _tasks[idx].nextRun = millis() + time;
        } else {
            _tasks[idx].nextRun = 0;
        }
        _tasks[idx].process = func;
    };

    void NAMFScheduler::runIn(byte slot, unsigned long time) {
        int idx;
        idx = findSlot(slot);
        if (idx < 0) return;

        if (time > 0) {
            _tasks[idx].nextRun = millis() + time;
        } else {
            _tasks[idx].nextRun = 0;
        }

    }

}
