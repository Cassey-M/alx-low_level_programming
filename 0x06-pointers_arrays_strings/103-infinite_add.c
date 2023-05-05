#include <stdio.h>
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int carry = 0, sum = 0;
int len1 = 0, len2 = 0, maxlen = 0;
int i = 0, j = 0, k = 0;
while (n1[len1] != '\0')
len1++;
while (n2[len2] != '\0')
len2++;
maxlen = (len1 > len2) ? len1 : len2;
if (maxlen + 1 > size_r)
return (0);
for (i = len1 - 1, j = len2 - 1, k = maxlen; i >= 0 || j >= 0; i--, j--, k--)
{
sum = carry;
if (i >= 0)
sum += n1[i] - '0';
if (j >= 0)
sum += n2[j] - '0';
carry = sum / 10;
r[k] = (sum % 10) + '0';
}
if (carry > 0)
r[k--] = carry + '0';
else
k--;
if (k < 0)
return (0);
for (i = 0; i <= maxlen; i++)
{
if (i == k)
break;
r[i] = r[i + k];
{
r[i] = '\0';
return (r);
}
