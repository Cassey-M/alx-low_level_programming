#include "main.h"
/**
* _sqrt - Computes the natural square root of a number.
*
* @n: The number to compute the square root of.
* @guess: The guess to start from.
*
* Return: The natural square root of n, or -1 if n has no natural square root.
*/
int _sqrt(int n, int guess)
{
if (guess * guess == n)
return (guess);
if (guess * guess > n)
return (-1);
return (_sqrt(n, guess + 1));
}
/**
* _sqrt_recursion - Computes the natural square root of a number.
*
* @n: The number to compute the square root of.
*
* Return: The natural square root of n, or -1 if n has no natural square root.
*/
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (_sqrt(n, 0));
}
