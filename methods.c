#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>

#include "headers.h"

struct slength getRandom() {
	int l = rand()%20;
	char s[20] = " ";
	int i = 0;
	for(;i<l;i++) {
		s[i] = rand()%100+'0';
	}
	s[i] = '\0';
	struct slength n;
	n.string = strdup(s);
	n.length = strlen(s);

	return n;
}

void printStruct(struct slength n) {
    printf("String:%s Length:%d\n",n.string,n.length);
}

void editStruct(struct slength *n, char *s) {
    n->string = strdup(s);
    n->length = strlen(s);
}
