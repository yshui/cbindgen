#include <stdarg.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

typedef struct {
  uint8_t A;
} pascal_case_struct;

typedef struct {
  uint8_t A;
} snake_case_struct;

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

void root(pascal_case_struct a, snake_case_struct b);

#ifdef __cplusplus
} // extern "C"
#endif // __cplusplus
