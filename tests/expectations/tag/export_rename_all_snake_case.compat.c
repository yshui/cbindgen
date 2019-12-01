#include <stdarg.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

struct pascal_case_struct {
  uint8_t A;
};

struct snake_case_struct {
  uint8_t A;
};

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

void root(struct pascal_case_struct a, struct snake_case_struct b);

#ifdef __cplusplus
} // extern "C"
#endif // __cplusplus
