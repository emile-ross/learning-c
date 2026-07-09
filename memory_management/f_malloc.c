#include <stdio.h>
#include <stdlib.h>

#define test_number (123)

int main(int argc, char *argv[])
{
	if (argc > 1)
	{
		auto char *str = argv[1];
		auto char *endptr;
		auto long int number;

		number = strtol(str, &endptr, 10);

		if (!(*endptr != '\0'))
		{
			printf("number is: %ld\n", number);
		}
		auto int array_elements = argc - 1;
		auto int numbers[array_elements];



		for (int i = 0; i < array_elements; i++)
		{
			int num = i + 1;
			char *end_ptr;
			int command_number = (int)strtol(argv[num], &end_ptr, 10);
			numbers[i] = command_number;
			printf("%d\n", numbers[i]);
		}
	}

	auto int y;
	auto int *x = malloc(4); /* size of the integer data type */

	x = &y;
	y = test_number;

	printf("%d\n", *x); /* dereference the x pointer to y */

    return 0;
}
