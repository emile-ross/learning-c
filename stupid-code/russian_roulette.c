#define _POSIX_C_SOURCE 200112L
#include <stdio.h>
#include <stdlib.h>


void kill_process(void)
{
	/* allocate the exact amount of memory to the command 
	 * so that we can safely execute a dangerous command */
	int mem_needed = 1 + snprintf(NULL, 0, "sudo kill -9 $(ps -e -o pid= | shuf -n 1)");
	
	char *cmd = malloc((size_t)mem_needed);

	snprintf(cmd, (size_t)mem_needed,
			"sudo kill -9 $(ps -e -o pid= | shuf -n 1)");
	system(cmd);
	
	/* free the memory previously allocated to the command */
	free(cmd);
}

int main(void)
{
	int input;
	printf("Press 1 to kill a process\n");
	
	scanf("%d", &input);
	
	if (input == 1)
	{
		int i = 0;
	    	int p_kill_again;

	    	/* kill_process(); */
	    	printf("Now that you've kille a process, how many other processes do you want to kill?\n");
	
	    	printf("Number of processes:");
	    	scanf("%d", &p_kill_again);
	
	    	if (p_kill_again > 0)
	    	{
	    		for (i = 0; i < p_kill_again; i++)
			{
				kill_process();
			}
		}
		else
		{
			exit(0);
		}
	}
	else
	{
		printf("Exiting..\n");
	}
	    
	
	return 0;
}

