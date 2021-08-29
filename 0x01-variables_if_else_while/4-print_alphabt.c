#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 for success
 */
int main(void)
{
	int n = 'a';

	for ( ; n <= 'z' ; n++)
	{
		if (n != 'q' && n != 'e')
			putchar(n);
	}
	putchar(10);
	return (0);
}
