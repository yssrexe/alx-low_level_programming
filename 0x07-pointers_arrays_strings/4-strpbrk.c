/**
 *_strpbrk - searches a string for any of a set of bytes.
 * @s: string
 * @accept: accepted bytes
 * Return: pointer to the occurrence of the character or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}

	return (0);
}
