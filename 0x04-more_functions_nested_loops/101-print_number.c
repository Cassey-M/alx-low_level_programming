#include "main.h"

/**
 * print_number - prints an integer
 * @n: the integer to print
 */
void print_number(int n)
{
    int num = n;
    int div = 1;

    if (num < 0) {
         putchar('-');
        num = -num;
    }

    while (num / div > 9) {
        div *= 10;
    }

    while (div != 0) {
         putchar(num / div + '0');
        num %= div;
        div /= 10;
    }
}
