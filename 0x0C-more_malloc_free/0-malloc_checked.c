#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
* malloc_checked - allocates memory using malloc
* @b: size to malloc
* Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
void *cp;

cp = malloc(b);

if (cp == NULL)
exit(98);

return (cp);
}
