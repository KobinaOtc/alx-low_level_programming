#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 for success
 */
int main(void)
{
	char n = '0';
	char m = 'a';

	for ( ; n <= '9' || m <= 'f'; n++)
	{
		if (n <= '9')
			putchar(n);
		else
		{
			putchar(m);
			m++;
		}
	}
	putchar(10);
	return (0);
}
