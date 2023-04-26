#include <stdbool.h>
/**
* _islower - checks if a character is lowercase
* @c: the character
* Return: True if letter is lowercase, False if not
*/
bool islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return true;
}
else
{
return false;
}
}
