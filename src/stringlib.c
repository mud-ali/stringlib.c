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

int compare(char* str, char* other) {
  int length_one = len(str);
  int length_two = len(other);
  if (length_two > length_one) return 1;
  if (length_two < length_one) return -1;

  int i;
  for (i = 0; i < length_one; i++) {
    int diff = str[i] - other[i];
    if (diff == 0) continue;
    return diff;
  }
  return 0;
}

int equals(char* str, char* other) { return compare(str, other) == 0; }

int uppercase(char* str) {
  int i;
  int ret = 0;
  for (i = 0; i < len(str); i++) {
    if (str[i] >= 'a' && str[i] <= 'z') {
      ret++;
      str[i] -= 32;
    }
  }
  return ret;
}

int lowercase(char* str) {
  int i;
  int ret = 0;
  for (i = 0; i < len(str); i++) {
    if (str[i] >= 'A' && str[i] <= 'Z') {
      ret++;
      str[i] += 32;
    }
  }
  return ret;
}