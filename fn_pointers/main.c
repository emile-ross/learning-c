#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdint.h>


struct student {
	char *name;
	bool failing;
	union {
		int16_t grade;
		int8_t colours[2];
	} data;
};

void increment_integer(int16_t *large_int);

int main(void)
{
	struct student a = { NULL, false, 0 };

	increment_integer((int16_t*)&a.data.grade);

	printf("grade  :%d\n", a.data.grade);
	printf("colour :%d\n", a.data.colours[0]);

	return 0;
}

void increment_integer(int16_t *large_int)
{
	for (int16_t i = 0; i < 150; i++)
	{
		(*large_int)++;
	}
}
