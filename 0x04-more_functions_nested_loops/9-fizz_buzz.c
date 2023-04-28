#include "stdio.h"

/**
 * fizzbuzz - prints Fizz-Buzz test up to a given number
 * @n: the number to print up to
 */
void fizzbuzz(int n)
{
    int i, j, digits, num;

    for (i = 1; i <= n; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            for (j = 0; j < 8; j++)
                 putchar("FizzBuzz"[j]);
        }
        else if (i % 3 == 0)
        {
            for (j = 0; j < 4; j++)
                 putchar("Fizz"[j]);
        }
        else if (i % 5 == 0)
        {
            for (j = 0; j < 4; j++)
                 putchar("Buzz"[j]);
        }
        else
        {
            digits = 0;
            num = i;
            while (num != 0)
            {
                num /= 10;
                digits++;
            }
            num = i;
            while (digits--)
            {
                 putchar(num / (digits == 0 ? 1 : 10) % 10 + '0');
            }
        }
        if (i != n)
             putchar(' ');
        else
             putchar('\n');
    }
}
