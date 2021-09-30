#include "variadic_functions.h"

/**
 * sum_them_all - adds up and returns the sum of
 * all arguments passed
 * @n: number of args
 *
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int i, sum = 0;

	va_start(ap, n);

	for (i = 0; (unsigned int)i < n; i++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}
