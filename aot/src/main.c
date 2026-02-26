
#include <stdio.h>


const char *help() {
  return "\n"
    "usage: nfbgf [FLAGS] [INPUT_FILES] -o [OUTPUT_FILE]\n"
    "Flags: \n"
    "-h   --help       Show this helper\n"
    "-o   --output     Define the output file\n"
    "\n";
}

int main(int argc, char **argv) {

  // HTML FILE FOR NOW
  const char *filename_input = argv[1];
  const char *filename_output = argv[2];

  FILE *file_in = fopen(filename_input, "r");
  FILE *file_out = fopen(filename_output, "r+");

  fclose(file_in);
  fclose(file_out);
  return 0;
}

