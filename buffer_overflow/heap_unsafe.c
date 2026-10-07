#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	char *str = "Hello World";

	void *buf = malloc(sizeof(str));
	char *new_str = (char*)buf;
	free(new_str);

	return 0;
}
