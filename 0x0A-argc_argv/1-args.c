#include <stdio.h>

/**
 * main - main function
 * @argc: argument count
 * @argv: argument victor
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	(void) argv;
	argc -= 1;
	printf("%d\n", argc);
	return (0);
}
