#include <stdio.h>
char *leet(char *s)
{
char *p = s;
char *leet_letters = "aAeEoOtTlL";
char *leet_codes = "43071";
int i, j;
while (*p != '\0')
{
for (i = 0; leet_letters[i] != '\0'; i++)
{
if (*p == leet_letters[i])
{
*p = leet_codes[i/2];
break;
}
}
p++;
}
return (s);
}
