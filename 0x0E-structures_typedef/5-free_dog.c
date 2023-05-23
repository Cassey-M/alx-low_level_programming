#include <stdlib.h>
#include "dog.h"
/**
* free_dog - Frees the memory allocated for a dog.
*
* This function frees the memory allocated for a dog. It takes a pointer to a
* dog_t object and frees the memory for its name, owner, and the dog itself.
* If the provided pointer is NULL, the function does nothing.
*
* @d: Pointer to the dog_t object to be freed.
*/
void free_dog(dog_t *d)
{
if (d != NULL)
{
free(d->name);
free(d->owner);
free(d);
}
}
