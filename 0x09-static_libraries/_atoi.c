#include "main.h"
int _atoi(char *s)
{
    int num = 0;
    int sign = 1;

    while (*s)
    {
        if (*s == '-')
            sign = -sign;
        else if (_isdigit(*s))
            num = num * 10 + (*s - '0');
        else if (num > 0)
            break;
        s++;
    }

    return (sign * num);
}
