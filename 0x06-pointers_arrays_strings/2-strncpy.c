#include <stdio.h>
char *_strncpy(char *dest, char *src, int n)
{
char *p = dest;
while (*src != '\0' && n > 0)
{
*p = *src;
p++;
src++;
n--;
}
while (n > 0)
{
*p = '\0';
p++;
n--;
}
return (dest);
}
