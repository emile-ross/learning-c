#include <stdio.h>
#include <stdint.h>
#include <string.h>
/*
#include <stdlib.h>
*/

int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		fprintf(stderr, "Missing arguments in command\n");
		return -1;
	}

	size_t size = 1 + strlen(argv[1]);
	char destination[size] = { 0 };
	int16_t a = 128;
	printf("a is valued at \'%u\'\n", a);
	printf("string is \"%s\"\n", argv[1]);

	/* unsafe write to destination char array */
	snprintf(destination, size, "%s", argv[1]);

	printf("a is valued at \'%u\'\n", a);
	printf("string is \"%s\"\n", destination);
}
