#include <cstdarg>
#include <cstdint>
#include <cstdlib>
#include <new>

struct pascal_case_struct {
  uint8_t A;
};

struct snake_case_struct {
  uint8_t A;
};

extern "C" {

void root(pascal_case_struct a, snake_case_struct b);

} // extern "C"
