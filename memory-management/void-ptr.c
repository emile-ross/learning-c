#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char *basic_text = "Hello World!";
	int big_number = 19258;
	int number_str_size = 1 + snprintf(NULL, 0, "%d", big_number);
	char *number_str = malloc((size_t)number_str_size);

	snprintf(number_str, (size_t)number_str_size, "%d", big_number);
	
	long unsigned buffer_size = (long unsigned)number_str_size + strlen(basic_text);
	void* cool_buffer = malloc(buffer_size);
	strcpy(cool_buffer, basic_text);
	strcat(cool_buffer, number_str);

	printf("The address of cool_buffer: %p\n", cool_buffer);
	printf("The address of number_str: %p\n", number_str);
	printf("The address of basic_text: %p\n", basic_text);
	printf("cool_buffer: %s\n", (char*)cool_buffer); /* dereference the void* pointer and cast it to a string */
	printf("basic_text: %s\n", basic_text);
	printf("number_str: %s\n", number_str);

	/* free the allocated memory */
	free(cool_buffer);
	free(number_str);
}
