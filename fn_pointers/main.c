#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int sub(int a, int b)
{
	return a - b;
}

int add(int a, int b)
{
	return a + b;
}

int divi(int a, int b)
{
	return a / b;
}
int mul(int a, int b)
{
	return a * b;
}
int main(int argc, char *argv[])
{
	if (argc < 4)
		fprintf(stderr, "Missing arguments for operation\n");
}
