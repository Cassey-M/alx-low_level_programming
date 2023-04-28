#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    long int n = 612852475143;
    long int i = 2, max_factor = 1;

    while (n > 1) {
        if (n % i == 0) {
            max_factor = i;
            while (n % i == 0) {
                n /= i;
            }
        }
        i++;
    }

    printf("%ld\n", max_factor);

    return (0);
}
