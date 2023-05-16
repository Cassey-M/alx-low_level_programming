#include <stdlib.h>
/*
* create_array - creates an array of chars and initialise it with a specific char.
* @size: the size of the array to be created.
* @c: the char to be initialized in the array.
* Return: returns a pointer to the array, or NULL if it fails.
*         If size = 0, returns NULL.
*/
char *create_array(unsigned int size, char c)
{
char *array;
unsigned int i;
if (size == 0)
return (NULL);
array = malloc(sizeof(char) * size);
if (array == NULL)
return (NULL);
for (i = 0; i < size; i++)
array[i] = c;
return (array);
}
