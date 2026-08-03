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

  /* take in account the null terminator **///
  size_t user_input_len = 1 + strlen(input_buffer);

  /* allocate memory for the user stringg
  * this is a different buffer because it doesn'tt
  * need the full size the first buffer had *///
  char *user_input = malloc(user_input_len);
  snprintf(user_input, user_input_len, input_buffer);
  free(input_buffer);

  free(user_input);
  return 0;
}
