#include "main.h"

/**
 * _strlen_recursion - this function returns the length of a string.
 * 
 * @s: Variable representing a string.
 * 
 * Return: void
 */

int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
else
s++;

return (1 + _strlen_recursion(s));
}
