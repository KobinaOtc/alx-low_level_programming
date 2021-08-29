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
	int o = '2';

	for (; n <= '9'; n++)
	{
		for (m = n + 1; m <= '9'; m++)
		{
			for (o = m + 1; o <= '9'; o++)
			{
				putchar(n);
				putchar(m);
				putchar(o);
				if (n != '7')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar(10);
	return (0);
}
