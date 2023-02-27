#include <stdio.h>

void ft_ft(int *nbr);

int main(void) {
    int number = 666;
    printf("%d\n", number);
    printf("%p\n", &number);

    ft_ft(&number);
    printf("%d\n", number);

}

void ft_ft(int *nbr) {
    int m = 55;
    printf("%p\n", nbr);
    *nbr = 42;
}