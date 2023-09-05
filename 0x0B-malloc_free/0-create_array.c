#include <stdlib.h>

/**
 * create_array - create an array function
 * @size: size of carracters ...
 * @c: type of charracters ...
 * Return: 0
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
		return (NULL);

	p = malloc(sizeof(c) * size);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	return (p);
}
