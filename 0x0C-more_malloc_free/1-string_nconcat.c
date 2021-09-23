#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
* string_nconcat - concatenates s1 to the first n bytes of s2
* @s1: stringto be  received
* @s2: string 2
* @n: bytes to be copied from s2
*
* Return -  pointer to resulting string
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *neow;
unsigned int a, b, len1, len2;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
len1 = strlen(s1);
len2 = strlen(s2);
if (n >= len2)
n = len2;
neow = malloc(sizeof(*neow) * (len1 + n + 1));
if (neow == NULL)
return (NULL);
for (a = 0; s1[a] != '\0'; a++)
neow[a] = s1[a];
for (b = 0; b < n && s2[b] != '\0'; b++)
{
neow[a] = s2[b];
a++;
}
neow[a] = '\0';
return (neow);
}
