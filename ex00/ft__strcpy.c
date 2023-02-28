#include <unistd.h>
#include <stdio.h>

char *ft__strcpy(char *dest, char *src);

int main(void)
{
    
}

char *ft__strcpy(char *dest, char *src) 
{
    int i = 0;
    while (1)
    {
        dest[i] = src[i];
        i++;
    }
    return dest;
}