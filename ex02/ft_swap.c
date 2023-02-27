#include <stdio.h>

void ft_swap(int *a, int*b);

int main(void) {
    int a = 66;
    int b = 77;
    ft_swap(&a, &b);
    printf("%d, %d\n", a, b);
}

void ft_swap(int *a, int *b) {
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}