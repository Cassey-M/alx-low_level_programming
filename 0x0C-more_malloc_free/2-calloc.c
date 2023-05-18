#include <stdlib.h>
/**
* _calloc - Allocates memory for an array using malloc.
* @nmemb: The number of elements in the array.
* @size: The size of each element in bytes.
*
* Return: A pointer to the allocated memory.
*         If nmemb or size is 0, or if malloc fails, it returns NULL.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
unsigned int i;
char *tmp;
if (nmemb == 0 || size == 0)
return (NULL);
ptr = malloc(nmemb * size);
if (ptr == NULL)
return (NULL);
tmp = ptr;
for (i = 0; i < nmemb * size; i++)
tmp[i] = 0;
return (ptr);
}
