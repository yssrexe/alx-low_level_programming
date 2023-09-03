#include<stdio.h>
/**
 * main - program
 * @argc: argument count
 * @argv: argument victor
 * return: always return 0
*/
int main(int argc, char **argv)
{
	(void)argv;
	argc = argc - 1;
	printf("%d\n",argc);
	return(0);
}
