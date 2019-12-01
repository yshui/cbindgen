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

void root(pascal_case_struct a, snake_case_struct b);
