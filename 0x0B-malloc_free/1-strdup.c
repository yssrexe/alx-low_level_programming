#include <stdlib.h>

/**
 * _strdup - function to str concat ...
 * @str: string
 * Return: 0
 */

char *_strdup(char *str)
{
	unsigned int i = 0;
	char *copy;

	if (str == NULL)
		return (NULL);

	while (str[i])
	{
		i++;
	}

	copy = malloc(sizeof(char) * (i + 1));

	if (copy == NULL)
		return (NULL);

	while (str[i])
	{
		copy[i] = str[i];
		i++;
	}
	return (copy);
}
