#include <unistd.h>
/**
*main - prints a message to standard error
*Return: Always 1 (error code)
*/
int main(void)
{
char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
int length = 59;
write(2, message, length);
return (1);
}
