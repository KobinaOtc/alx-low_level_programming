#include "main.h"
/**
char * _strcat - a function that concatenates tow strings
*/

char *_strcat (char *dest, char *src)

{
int i, j;
i = 0;
j = 0;

while (*(dest + i) != '\0')
{
i++;
j++;
}

i = 0;
while (*(src + i) != '\0')
{
dest[j] = src[i];
i++;
j++;
}
dest[j] = '\0';
return (dest);
}
