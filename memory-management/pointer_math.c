#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char *basic_data = "OIJDuashduoiyabousdbfaoiufbasduifbaofybasoufdybasdmnlkjjhweopqwueoyqofdigzxhe087h*(G78ogvbrouybO*&G";
	size_t data_size = 1 + snprintf(NULL, 0, "%s %s", basic_data, basic_data);
	void* basic_buffer = malloc(data_size);
	snprintf(basic_buffer, data_size, "%s %s", basic_data, basic_data);
	int basic_buffer_addr = &basic_buffer;
	printf("%d\n", basic_buffer_addr);
	printf("%s\n", (char*)basic_buffer);
}
