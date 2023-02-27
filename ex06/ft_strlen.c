#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str);

int main(void) {
    char s[] = {"vi\n"};
    int t = ft_strlen(s);
    printf("%d\n", t);
}

int ft_strlen(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return i;
}