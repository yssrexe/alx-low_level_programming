#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory
 * @b: unsigned integer
 * Return: always 0
 */

void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);

	if(p == NULL)
		exit(98);

	return(p);
}
