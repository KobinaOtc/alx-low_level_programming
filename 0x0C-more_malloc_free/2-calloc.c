#include "main.h"
#include <stdlib.h>

/**
* _calloc - allocate memory and set all values to 0
* @nmemb: the expected number of elements
* @size: the expected size of an elements in bytes
*
* Return: pointer to array
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
void *cp;
char *abc;
unsigned int i;

if (size == 0)
return (NULL);
if (nmemb == 0)
return (NULL);
cp = malloc(size * nmemb);

if (cp == NULL)
return (NULL);

abc = cp;
for (i = 0; i < (nmemb * size); i++)
abc[i] = '\0';

return (cp);
}
