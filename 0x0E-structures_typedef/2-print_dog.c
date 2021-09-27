#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
* print_dog - prints a struct dog
* @d: initialzizing the dog struct
*/

void print_dog(struct dog *d)
{
if (d == NULL)
exit(EXIT_SUCCESS);
if (d->name == NULL)
{
printf("Name: (nil)\n");
printf("Age: %f\n", d->age);
if (d->owner == NULL)
printf("Owner: (nil)\n");
else
{
printf("Owner: %s\n", d->owner);
}
}
else
{
printf("Name: %s\n", d->name);
printf("Age: %f\n", d->age);
printf("Owner: %s\n", d->owner);
}
}
