#include <strings.h>
#include <stdio.h>

int main(void)
{
	/* print out the same string 2 times */
	char *example_string = "Hello World\n";
	printf(example_string);
	printf("%s", example_string);

	/* create a third string based on the first one
	 * but append "Hi !\n" at the end of the string */
	char other_string[24];	/* create an array of 24 characters */ 
	snprintf(other_string, sizeof(other_string), "%sHi !\n", example_string);
	printf("%s", other_string);
	return 0;
}
