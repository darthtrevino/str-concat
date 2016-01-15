#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "str-concat.h"

int failed = 0;

#define assert_equal_str(a, b) ({ \
  if (0 != strcmp(a, b)) { \
    fprintf(stderr, "Assertion failed: \"%s\" != \"%s\"\n", a, b); \
    failed++; \
  } \
})

int
main(void) {
  char *res = NULL;

  res = concat("abc", "123");
  assert_equal_str(res, "abc123");
  free(res);

  return failed;
}
