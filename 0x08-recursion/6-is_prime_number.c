#include "main.h"

int check_prime(int n, int divisor);

/**
 * is_prime_number - Checks if a number is prime.
 * @n: The number to be checked.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
    return (check_prime(n, 2));
}

/**
 * check_prime - Recursive helper function to check if a number is prime.
 * @n: The number to be checked.
 * @divisor: The current divisor to check.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */
int check_prime(int n, int divisor)
{
    if (n <= 1)
        return (0);
    if (n % divisor == 0 && divisor != n)
        return (0);
    if (divisor > n / 2)
        return (1);
    return (check_prime(n, divisor + 1));
}
