#include <stdio.h>
#include <stdlib.h>

/**
 * check_argc - check if variable is number or not
 * @n: intiger
 * Return: 1 or 0
 */
int check_argc(char *n)
{
	while (*n)
	{
		if (*n >= '0' && *n <= '9')
			n++;
		else
			return (1);
	}
	return (0);
}


/**
 * main - main function
 * @argc: args count
 * @argv: args array
 * Return: return 1 or 0
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i = 1;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	while (i < argc)
	{
		if (check_argc(*(argv + i)))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(*(argv + i));
		i++;
	}

	printf("%d\n", sum);
	return (0);
}
