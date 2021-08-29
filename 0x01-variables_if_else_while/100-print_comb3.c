#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 for success
 */
int main(void)
{
	int n = '0';
	int m = '1';

	for (; n <= '9'; n++)
	{
		for (m = n + 1; m <= '9'; m++)
		{
			putchar(n);
			putchar(m);
			if (n != '8')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar(10);
	return (0);
}
