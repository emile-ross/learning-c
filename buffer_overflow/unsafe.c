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

	int16_t a = 128;
	printf("a is valued at \'%u\'\n", a);
	char destination[10] = { 0 };
	strcpy(destination, argv[1]);
	printf("a is valued at \'%u\'\n", a);
}
