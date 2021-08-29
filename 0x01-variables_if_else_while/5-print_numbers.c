#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 for success
 */
int main(void)
{
	int n = '0';

	for ( ; n <= '9' ; n++)
	{
		putchar(n);
	}
	putchar(10);
	return (0);
}
