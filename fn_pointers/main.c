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

int fun(int a, int b, int (*fun_p)(int, int))
{
	if (fun_p == NULL)
		fprintf(stderr, "NULL fn pointer\n");
	return (*fun_p)(a, b);
}

int main(int argc, char *argv[])
{
	if (argc < 4)
		fprintf(stderr, "Missing arguments for operation\n");

	int (*fn_p)(int, int) = NULL;

	if (strcmp(argv[2], "-") == 0)
		fn_p = &sub;
	else if (strcmp(argv[2], "+") == 0)
		fn_p = &add;
	else if (strcmp(argv[2], "/") == 0)
		fn_p = &divi;
	else
		fn_p = &mul;

	printf("%d\n", fun(atoi(argv[1]), atoi(argv[3]), fn_p));
}
