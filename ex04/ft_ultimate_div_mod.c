#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

int main(void) {
    int a = 66;
    int b = 55;
    ft_ultimate_div_mod(&a, &b);
}

void ft_ultimate_div_mod(int *a, int *b) {
    int tmp;
    tmp = *a;
    *a = *a / *b;
    *b = tmp % *b;
}