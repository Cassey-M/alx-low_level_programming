#include "main.h"
/**
* jack_bauer - prints every minute of the day
*/
void jack_bauer(void)
{
int hour, minute;
for (hour = 0; hour <= 23; hour++)
{
for (minute = 0; minute < 59; minute++)
{
_putchar("%.2d:%.2d\n", hour, minute);
}
}
}
