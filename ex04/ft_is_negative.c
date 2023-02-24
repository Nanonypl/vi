#include <unistd.h>

void ft_is_negative(int n);

int main(void) {
    int m;
    ft_is_negative(m);
}

void ft_is_negative(int n) {
    char c;
    if (n > 0) {
        c = 'N';
        write(1, &c, 1);
    }
    else {
        c = 'P';
        write(1, &c, 1);
    }
}