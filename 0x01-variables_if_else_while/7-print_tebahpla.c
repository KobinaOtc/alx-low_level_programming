#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 for success
 */
int main(void)
{
	int n = 'z';

	for ( ; n >= 'a' ; n--)
	{
		putchar(n);
	}
	putchar(10);
	return (0);
}
