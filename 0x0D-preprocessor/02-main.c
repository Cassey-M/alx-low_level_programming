#include <stdio.h>
#include <stdlib.h>
#define _putchar(c) putchar(c)
/**
* main -  prints the name of the file.
*
* Return: Always 0
*/
int main(void)
{
const char *filename = __FILE__;
int i = 0;
while (filename[i] != '\0')
{
_putchar(filename[i]);
i++;
}
_putchar('\n');
exit(EXIT_SUCCESS);
}
