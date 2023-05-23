#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
* new_dog - Creates a new dog.
*
* @name:   The name of the dog.
* @age:    The age of the dog.
* @owner:  The owner of the dog.
*
* Return: Pointer to the newly created dog_t object,
*         or NULL if the function fails.
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *newDog;
size_t nameLen = 0;
size_t ownerLen = 0;
size_t i;
if (name == NULL || owner == NULL)
return (NULL);
newDog = (dog_t *)malloc(sizeof(dog_t));
if (newDog == NULL)
return (NULL);
while (name[nameLen] != '\0')
nameLen++;
while (owner[ownerLen] != '\0')
ownerLen++;
newDog->name = (char *)malloc(nameLen + 1);
newDog->owner = (char *)malloc(ownerLen + 1);
if (newDog->name == NULL || newDog->owner == NULL)
{
free(newDog->name);
free(newDog->owner);
free(newDog);
return (NULL);
}
for (i = 0; i <= nameLen; i++)
newDog->name[i] = name[i];
for (i = 0; i <= ownerLen; i++)
newDog->owner[i] = owner[i];
newDog->age = age;
return (newDog);
}
