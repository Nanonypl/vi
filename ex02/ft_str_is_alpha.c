#include <unistd.h>
#include <stdio.h>

int ft_str_is_alpha(char *str);
int is_alpha(char c);

int main(void) 
{
    char c[] = {"af/."};
    int n = ft_str_is_alpha(c);
    printf("%d\n", n);
}

int is_alpha(char c)
{
    if ((c < 'z' && c > 'a') || (c < 'Z' && c > 'A'))
        return (1);
    return 0;
}

int ft_str_is_alpha(char *str)
{
    int i = 0;
    while (str[i])
    {
        if (!(is_alpha(str[i])))
            return 0;
        i++;
    }
    return 1;
}

