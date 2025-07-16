#include <stdio.h>
#include <stdlib.h>

int len(char* str) {
  int i = 0;
  while (str[i] != '\0') i++;
  return i;
}

char* substr(char* str, int begin, int end) {
  int length = end - begin + 1;
  char* new_str = malloc(length * sizeof(char));
  int i = 0;
  for (i = 0; i < length; i++) {
    new_str[i] = str[i + begin];
  }
  new_str[i] = '\0';
  return new_str;
}

int find(char* str, char* substr) {}