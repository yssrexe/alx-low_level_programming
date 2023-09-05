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

	if (size == 0)
		return (NULL);

	p = malloc(sizeof(c) * size);
	if (!p)
		return (NULL);

	while (size-- > 0)
		*(p + size) = c;

	return (0);
}
