#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* positive_or_negative - Entry point
* @i: integer
* Return: Always 0 (Success)
*/
void positive_or_negative(int i)
{
srand(time(0));
i = rand() - RAND_MAX / 2;
printf("%d ", i);
if (i > 0)
printf("is positive\n");
else if (i == 0)
printf("is zero\n");
else
printf("is negative\n");
}
