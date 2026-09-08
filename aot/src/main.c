
#include <stdio.h>
#include <string.h>
#include "macros.h"

typedef enum SUPPORTED {
  E_HTML,
  E_CSS
} e_ext_sp;

const char *help() {
  return "\n"
    "usage: nfbgf [FLAGS] [INPUT_FILES] -o [OUTPUT_FILE]\n"
    "Flags: \n"
    "-h   --help       Show this helper\n"
    "-o   --output     Define the output file\n"
    "-l   --list       List of acceptable file extensions\n"
    "\n";
}
int main(int argc, char **argv) {

  if (argc < 2) {
    fprintf(stderr, "ERROR: Needs at least 1 argument\n");
    printf("%s", help());
    return 1;
  } 

  const char *filename_input = argv[1];
  const char *file_ext = filename_input+strcspn(filename_input, "."); // with the dot
  e_ext_sp ext_code;
  const char *filename_output = argv[2];

  // can be evolved to magic number if necessary
  if (strncmp(file_ext, ".html", 5) == 0) {
    ext_code = E_HTML;
  } else if (strncmp(file_ext, ".css", 5) == 0) {
    ext_code = E_CSS;
  } else {
    UNSUPPORTED(file_ext);
    return 1;
  }

  FILE *input = fopen(filename_input, "r");
  if (input == NULL) {
    fprintf(stderr, "ERROR: file %s not found\n", filename_input);
    return 1;
  }

  if (filename_output == NULL) {
    fprintf(stdout, "NOTE: Creating file as %s.bgf\n", filename_input);
  }

  switch (ext_code) {
    case E_HTML: {
      // Call compiler shananigans for html
      printf("Parse HTML\n");

      break;
    }
    case E_CSS: {
      // Call compiler shananigans for css
      UNSUPPORTED("compiler for css");

      break;
    }
  }

  return 0;
}

