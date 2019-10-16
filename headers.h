#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>

struct slength {char *string; int length;};
struct slength getRandom();
void printStruct(struct slength n);
void editStruct(struct slength *n, char *s);
