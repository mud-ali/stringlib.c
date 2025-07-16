#include <stdio.h>
#include "stringlib.h"

int main() {
    char* test = "hello_world";
    printf("length of string: %d\n", len(test));

    printf("%s", substr(test, 2, 5));
    return 0;
}