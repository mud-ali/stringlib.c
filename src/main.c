#include <stdio.h>

#include "stringlib.h"

int main() {
  char test[] = "HELLO_WO5LD";
  printf("length of string: %d\n", len(test));

  printf("Substring: %s\n", substr(test, 2, 5));

  char* equivalent = "heLlo_world";
  char* different = "heLlo_zorld";

  printf("compare equal strings: %d\n", compare(equivalent, test));  // 0
  printf("compare unequal strings: %d\n",
         compare(different, equivalent));  // positive number

  int z = lowercase(test);
  printf("lowercase version of a string: %s\n", test);
  printf("Updated %d chars", z);

  return 0;
}