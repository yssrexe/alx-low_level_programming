#include "main.h"
 /**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void	
 */
int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
    {
        i++;
    }
    return(i);
}

char *_strcat(char *dest, char *src)
{
    int len = ft_strlen(dest);
    int i = 0;
    while (src[i])
    {
        dest[len] = src[i];
        i++;
        len++;
    }
    dest[len] = '\0';
    return(dest);
}
