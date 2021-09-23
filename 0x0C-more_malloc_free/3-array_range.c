#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* array_range - creates array of integers from min to max
* @min: minimum range point
* @max: maximum range point
*
* Return: pointer to array of int
*/

int *array_range(int min, int max)
{
int *cp;
int i, size;

if (min > max)
return (NULL);

size = max - min + 1;

cp = malloc(sizeof(int) * size);

if (cp == NULL)
return (NULL);

for (i = 0; min <= max; i++)
cp[i] = min++;

return (cp);
}
