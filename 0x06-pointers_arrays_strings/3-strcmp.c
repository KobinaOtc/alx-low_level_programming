#include "main.h"
/**
* _strcmp - compares two strings, ending at the first byte that is different.
* @s1: string to be compared
* @s2: string to compare by
* Return: the difference between the first character that are not the same
*/

int _strcmp(char *s1, char *s2)
{
int count, comVal;
count = 0;

while (s1[count] == s2[count] && s1[count] != '\0')
{
count++;
}

comVal = s1[count] - s2[count];
return (comVal);
}
