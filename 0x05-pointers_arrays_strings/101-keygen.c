#include <stdlib.h>
#include <time.h>

void _putchar(char c);

/**
 * main - Generates a random valid password for the program 101-crackme
 *
 * Return: Always 0
 */
int main(void)
{
    int sum = 0;
    char password[84];
    int i, r;

    srand(time(0));

    for (i = 0; i < 10; i++)
        password[i] = rand() % 10 + '0';

    sum = 0;
    for (i = 0; i < 10; i++)
        sum += password[i] - '0';

    password[i++] = (sum % 10) + '0';
    password[i++] = '\n';

    for (; i < 84; i++)
    {
        r = rand() % 3;
        if (r == 0)
            password[i] = rand() % 10 + '0';
        else if (r == 1)
            password[i] = rand() % 26 + 'a';
        else
            password[i] = rand() % 26 + 'A';
    }

    for (i = 0; i < 83; i++)
        _putchar(password[i]);

    return (0);
}
