#include <stdlib.h>
/**
* _realloc - Reallocates a memory block using malloc and free.
* @ptr: Pointer to the memory previously allocated with malloc.
* @old_size: Size of the allocated space for ptr.
* @new_size: New size of the memory block.
*
* Return: Pointer to the reallocated memory block.
*         If new_size is equal to zero and ptr is not NULL, it returns NULL.
*         If ptr is NULL, it is equivalent to malloc(new_size).
*         If malloc fails, it returns NULL.
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
unsigned int i;
char *src = ptr;
char *dest = new_ptr;
void *new_ptr;
src = ptr;
dest = new_ptr;
if (new_size == old_size)
return (ptr);
if (ptr == NULL)
{
new_ptr = malloc(new_size);
if (new_ptr == NULL)
exit(98);
return (new_ptr);
}
if (new_size == 0)
{
free(ptr);
return (NULL);
}
new_ptr = malloc(new_size);
if (new_ptr == NULL)
return (NULL);
if (new_size < old_size)
old_size = new_size;
for (i = 0; i < old_size; i++)
dest[i] = src[i];
free(ptr);
return (new_ptr);
}
