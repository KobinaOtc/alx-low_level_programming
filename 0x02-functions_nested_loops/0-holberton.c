#include "holberton.h"

/**
 * main - Print text
 *
 * Return: 0 for success
 *
 */

int main(void)
{
	char *sh = "Holberton";

	while (*sh)
	{
		_putchar(*sh);
		sh++;
	}
	_putchar('\n');
	return (0);
}
