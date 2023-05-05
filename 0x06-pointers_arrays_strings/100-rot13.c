#include <stdio.h>
char *rot13(char *s)
{
char *p = s;
int i;
while (*p != '\0')
{
for (i = 0; i < 13 && (*p >= 'A' && *p <= 'Z' || *p >= 'a' && *p <= 'z'); i++)
{
if (*p >= 'a' && *p <= 'z')
{
*p = (*p - 'a' + 13) % 26 + 'a';
}
else
{
*p = (*p - 'A' + 13) % 26 + 'A';
}
}
p++;
}
return (s);
}
