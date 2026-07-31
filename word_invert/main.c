#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  size_t input_max_len = 255;
  char *input_buffer = malloc(input_max_len);
	fgets(input_buffer, (int)input_max_len, stdin);
  return 0;
}
