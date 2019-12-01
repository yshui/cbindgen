#include <stdarg.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

typedef struct PascalCaseStruct {
  uint8_t A;
} PascalCaseStruct;

typedef struct SnakeCaseStruct {
  uint8_t A;
} SnakeCaseStruct;

typedef struct Single {
  uint8_t A;
} Single;

void root(PascalCaseStruct a, SnakeCaseStruct b, Single c);
