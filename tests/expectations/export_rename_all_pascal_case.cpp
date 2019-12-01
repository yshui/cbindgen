#include <cstdarg>
#include <cstdint>
#include <cstdlib>
#include <new>

struct PascalCaseStruct {
  uint8_t A;
};

struct SnakeCaseStruct {
  uint8_t A;
};

struct Single {
  uint8_t A;
};

extern "C" {

void root(PascalCaseStruct a, SnakeCaseStruct b, Single c);

} // extern "C"
