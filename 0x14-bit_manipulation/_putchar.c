#include "main.h"

/**
 * _putchar - function
 * @c: char
 * Return: character
*/

char _putchar(char c)
{
	return (write(1, &c, 1));
}
