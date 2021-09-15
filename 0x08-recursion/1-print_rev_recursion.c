#include "main.h"
/**
 * _print_rev_recursion - Writes the reverse of a string
 * @s: Represents pointer to string.
 */
void _print_rev_recursion(char *s)
{
if (*s)
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
