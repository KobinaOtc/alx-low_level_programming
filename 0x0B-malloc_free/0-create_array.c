#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - create array of chars and initialize with a specific char
 * @size: size of array
 * @c: fill array values with this char
 * Return: pointer to array
 */

char *create_array(unsigned int size, char c)

{
char *cp;
unsigned int i;

if (size == 0)
return (NULL);

cp = malloc(sizeof(char) * size);

if (cp == 0)
return (NULL);
for (i = 0; i < size; i++)
{
cp[i] = c;
}
return (cp);
}
