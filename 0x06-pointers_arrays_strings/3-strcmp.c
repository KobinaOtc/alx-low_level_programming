#include "main.h"
/**
 * _strcmp - compares two strings, ending at the first byte that is different.
 * @s1: string to be compared
 * @s2: string to compare by
 * Return: the difference between the first character that are not the same
 */

int _strcmp(char *s1, char *s2)
{
int counter, compVal;

counter = 0;
while (s1[counter] == s2[counter] && s1[counter] != '\0')
{
counter++;
}

compVal = s1[counter] - s2[counter];
return (compVal);
}
