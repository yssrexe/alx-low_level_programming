#include<unistd.h>

void _puts_recursion(char *s)
{
    int i = 0;

    while(s[i])
    {
        write(1, &s[i], 1);
        i++;
    }
    write(1, "\n", 1);
}