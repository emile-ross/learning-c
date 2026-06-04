#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char *basic_data = "OIJDuashduoiyabousdbfaoiufbasduifbaofybasoufdybasdmnlkjjhweopqwueoyqofdigzxhe087h*(G78ogvbrouybO*&G";
	size_t basic_data_size = strlen(basic_data);

	if (!(basic_data_size > 0))
	{
		return 1;
	}

	char *new_string = *(&basic_data + (basic_data_size / 2));
	printf("%s\n", new_string);

	size_t data_size = 1 + (size_t)snprintf(NULL, 0, "%s %s", basic_data, basic_data);
	void* basic_buffer = malloc(data_size);
	snprintf(basic_buffer, data_size, "%s %s", basic_data, basic_data);

	long long basic_buffer_addr = (long long)basic_buffer;

	printf("%lld\n", basic_buffer_addr);
	printf("%s\n", (char*)basic_buffer);
}
