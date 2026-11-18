#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>

int compare(const char *restrict s1, const char *restrict s2);

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

	if (compare(argv[2], "-"))
		fn_p = &sub;
	else if (compare(argv[2], "+"))
		fn_p = &add;
	else if (compare(argv[2], "/"))
		fn_p = &divi;
	else
		fn_p = &mul;

	printf("%d\n", fun(atoi(argv[1]), atoi(argv[3]), fn_p));
}

int compare(const char *restrict s1, const char *restrict s2)
{
	uint32_t i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return 0;
		i++;
	}
	if (s1[i] == s2[i])
		return 1;
	else 
		return 0;
}
