
#ifndef H_MACROS
#define H_MACROS

#include <stdio.h>

#define UNSUPPORTED(x) {\
  fprintf(stderr, "ERROR: unsupported function %s\n", x); \
}

#endif

