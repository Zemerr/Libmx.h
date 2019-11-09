#include "../inc/libmx.h"

void *mx_memset(void *b, int c, size_t len) {
	char *str = (char *) b;
	for (unsigned long i = 0; i < len; i++) {
		str[i] = c;
	}
	return b;
}
/*
int main() {
	char p[] = "Heeelllllo";
	char r = 'r';
	size_t h = 5;
	printf("%s", mx_memset(p, r, h));
}*/	
