#include "variadic_functions.h"

/**
 * print_strings - prints all arguments passed
 * @separator: separator used
 * @n: number of args
 *
 * Return: (void)
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	int i;

	va_start(ap, n);

	for (i = 0; (unsigned int)i < n; i++)
	{
		char *str = va_arg(ap, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (separator != NULL && (unsigned int)i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
