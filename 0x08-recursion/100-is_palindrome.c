#include "main.h"
int is_palindrome(char *s)
{
int len = 0;
char *p = s;
// Get length of the string
while (*p)
{
len++;
p++;
}
// Compare characters from both ends of the string
for (int i = 0; i < len / 2; i++)
{
if (*(s + i) != *(s + len - i - 1))
{
return (0);
}
}
return (1);
}
