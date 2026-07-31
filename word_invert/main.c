#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  size_t input_max_len = 255;
  char *input_buffer = malloc(input_max_len);
	if (fgets(input_buffer, (int)input_max_len, stdin) == NULL)
	{
    fprintf(stderr, "Failed to get input from fgets()\n");
    return 1;
	}
  return 0;
}
