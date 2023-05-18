#include <stdlib.h>
/**
 * _strlen - Calculates the length of a string.
 * @s: The string.
 *
 * Return: The length of the string.
 */
unsigned int _strlen(char *s)
{
    unsigned int len = 0;

    while (*s)
    {
        len++;
        s++;
    }

    return len;
}

/**
 * _isdigit - Checks if a character is a digit.
 * @c: The character to check.
 *
 * Return: 1 if the character is a digit, 0 otherwise.
 */
int _isdigit(char c)
{
    return (c >= '0' && c <= '9');
}
int _putchar(char c);

/**
 * mul - Multiplies two positive numbers.
 * @num1: The first number.
 * @num2: The second number.
 */
void mul(char *num1, char *num2)
{
    unsigned int len1, len2, len, i, j;
    int *result;

    len1 = _strlen(num1);
    len2 = _strlen(num2);
    len = len1 + len2;

    result = malloc(sizeof(int) * len);
    if (result == NULL)
        exit(98);

    for (i = 0; i < len; i++)
        result[i] = 0;

    for (i = len1 - 1; i < len1; i--)
    {
        if (!_isdigit(num1[i]))
        {
            free(result);
            exit(98);
        }

        for (j = len2 - 1; j < len2; j--)
        {
            if (!_isdigit(num2[j]))
            {
                free(result);
                exit(98);
            }

            result[i + j + 1] += (num1[i] - '0') * (num2[j] - '0');
            result[i + j] += result[i + j + 1] / 10;
            result[i + j + 1] %= 10;
        }
    }

    i = 0;
    while (i < len - 1 && result[i] == 0)
        i++;

    while (i < len)
    {
        _putchar(result[i] + '0');
        i++;
    }

    _putchar('\n');

    free(result);
}
