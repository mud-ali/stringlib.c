#include <stdio.h>

#include "stringlib.h"

int main() {
  char* test = "hello_world";
  printf("length of string: %d\n", len(test));

  printf("%s\n", substr(test, 2, 5));
  
  char* equivalent = "hello_world";
  char* different = "hello_zorld";

  printf("%d\n", compare(equivalent, test)); // 0
  printf("%d\n", compare(different, equivalent)); // positive number

  return 0;
}