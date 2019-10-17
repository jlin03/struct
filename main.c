#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>

#include "headers.h"

int main() {
    srand(time(NULL));
    char s[10] = "replaced";
    struct slength x = getRandom();
    printStruct(x);
    editStruct(&x,s);
    printf("editing the value of string in struct...\n\n");
    printStruct(x);
}
