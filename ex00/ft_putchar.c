#include <unistd.h>

void ft_putchar(char c);

int main(void) {
    ft_putchar('o');
}

void ft_putchar(char c) {
    // ssize_t write(int fd, const void *buf, size_t count);
    write(1, &c, 1);
}