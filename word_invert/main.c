#include <stdio.h>
#include <stdlib.h>

int game(char *word);
int display_word(char *word);

int main(void)
{
	uint16_t input_max_len = 1024;
	char *input_buffer = malloc(input_max_len);

	if (fgets(input_buffer, input_max_len, stdin) == NULL)
	{
		fprintf(stderr, "Failed to get input from fgets()\n");
		free(input_buffer);
		return 1;
	}

	printf("input_buffer -> %s \n", input_buffer);
	
	/* take in account the null terminator **///
	size_t user_input_len = strlen(input_buffer);
	
	/* allocate memory for the user stringg
	* this is a different buffer because it doesn'tt
	* need the full size the first buffer had *///
	char *user_input = malloc(user_input_len);
	snprintf(user_input, user_input_len, "%s", input_buffer);
	printf("user_input -> %s length -> %zu\n", user_input, user_input_len);
	free(input_buffer);
	
	game(user_input, user_input_len);
	
	free(user_input);
	return 0;
}

int game(char *word)
{
	display_word(word);
	
	uint16_t len = strlen(word);
	char *answer = malloc(len);

	size_t j = len - 1;
	printf("answer is :%s length: %hu\n", answer, len);

	size_t str_size = len + 4;
	char *user_answer = malloc(str_size);
	if (fgets(user_answer, (int)str_size, stdin) == NULL) 
	{
		fprintf(stderr, "Failed to get input with fgets()\n");
	}
	fflush(stdin);

	if (strcmp(answer, user_answer) == 0)
	{
		printf("You typed the word correctly!\n");
	}

	free(user_answer);
	free(answer);
	return 0;
}

int display_word(char *word)
{
	uint16_t len = strlen(word);
	printf("The word you typed is: \"%s\"\n", word);
	
	if (len > 8)
	{
		printf("That's a pretty long ");
		if (len > 28)
		{
			printf("\"word\"\n");
			printf("I've never seen it before\n");
		}
		else
		{
			printf("word\n");
		}
	}
	return 0;
}

void display_answer(char *word)
{
}
