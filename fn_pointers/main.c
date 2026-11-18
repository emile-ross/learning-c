#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdint.h>


struct student {
	char *name;
	bool failing;
	int8_t avg;
	int8_t grade;
	int8_t favourite_colour;
};

void increment_integer(int16_t *large_int);

int main(void)
{
	struct student a = { NULL, false, 0, 0 };

	increment_integer((int16_t*)&a.grade);

	printf("average: %d\n", a.avg);
	printf("grade  :%d\n", a.grade);
	printf("colour :%d\n", a.favourite_colour);

	return 0;
}

void increment_integer(int16_t *large_int)
{
	for (int16_t i = 0; i < 150; i++)
	{
		(*large_int)++;
		printf("i    : %d\n", i);
		printf("large: %d\n", *large_int);
	}
}
