#include <stdio.h>

/**
  * main - Entry point
  *
  * Return: 0 (Success)
  */

int main(void)
{
	char letter;

	for (letter = 97; letter <= 122; letter++)
	{
		if (letter != 101 && letter != 113)
			putchar(letter);
	}

	putchar('\n');

	return (0);
}
