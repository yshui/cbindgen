#include <stdarg.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

struct PascalCaseStruct {
  uint8_t A;
};

struct SnakeCaseStruct {
  uint8_t A;
};

struct Single {
  uint8_t A;
};

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

void root(struct PascalCaseStruct a, struct SnakeCaseStruct b, struct Single c);

#ifdef __cplusplus
} // extern "C"
#endif // __cplusplus
