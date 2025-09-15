import re
from pathlib import Path

Import("env")

# Base directory where PlatformIO stores library dependencies
LIBDEPS_DIR = Path(env["PROJECT_DIR"]) / ".pio" / "libdeps"

# Pattern: Wire.requestFrom(a, b) where a/b are not already casted
PATTERN = re.compile(
    r'Wire\.requestFrom\s*\(\s*(?!\(int\))([^\s,()]+)\s*,\s*(?!\(int\))([^\s,()]+)\s*\)'
)
REPL = r'Wire.requestFrom((int) \1, (int) \2)'

def patch_file(path: Path) -> int:
    """Read file, patch Wire.requestFrom calls, and return number of replacements."""
    try:
        text = path.read_text(encoding="utf-8", errors="ignore")
    except Exception as e:
        print(f"[fix_wire] Could not read {path}: {e}")
        return 0
    new_text, n = PATTERN.subn(REPL, text)
    if n > 0:
        path.write_text(new_text, encoding="utf-8")
        print(f"[fix_wire] Patched {n} occurrence(s) in {path}")
    return n

total = 0
# Search recursively for all "sensirion_hw_i2c_implementation.cpp" files
for f in LIBDEPS_DIR.rglob("sensirion_hw_i2c_implementation.cpp"):
    total += patch_file(f)

if total == 0:
    print("[fix_wire] warning: no Wire.requestFrom() calls were patched.")
else:
    print(f"[fix_wire] Total replacements: {total}")
