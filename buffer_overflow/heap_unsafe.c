#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	char *str = "Hello World";

	void *buf = malloc(sizeof(str));
	char *new_str = (char*)buf;

	/* to see everything after the buffer end */
	char *reject = (char*)buf + sizeof(str);

	/* new_str is allocated with invalid bounds
	 * therefore, copying the contents of str
	 * over to the new_str buffer leads to buffer truncation */
	strcpy(new_str, str);

	printf("string is: %s\n", new_str);
	printf("string is: %s\n", reject);
	free(new_str);

	return 0;
}
