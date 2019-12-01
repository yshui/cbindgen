#include <stdarg.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

typedef struct {
  uint8_t A;
} PascalCaseStruct;

typedef struct {
  uint8_t A;
} SnakeCaseStruct;

typedef struct {
  uint8_t A;
} Single;

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

void root(PascalCaseStruct a, SnakeCaseStruct b, Single c);

#ifdef __cplusplus
} // extern "C"
#endif // __cplusplus
