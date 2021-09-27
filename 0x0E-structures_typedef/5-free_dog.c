#include <stdlib.h>
#include "dog.h"

/**
* free_dog - let's the dogs out(free)
* @d: some dogs that need freeing
* Return: void
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
