#include "variadic_functions.h"

/**
 * print_all - prints all arguments passed
 * @format: format of args
 *
 * Return: (void)
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0, n = 0;
	char *separator = ", ";
	char *str;

	va_start(ap, format);

	while (format && format[i])
		i++;

	while (format && format[n])
	{
		if (n == (i - 1))
			separator = "";

		switch (format[n])
		{
			case 'c':
				printf("%c%s", va_arg(ap, int), separator);
				break;
			case 'f':
				printf("%f%s", va_arg(ap, double), separator);
				break;
			case 'i':
				printf("%d%s", va_arg(ap, int), separator);
				break;
			case 's':
				str = va_arg(ap, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s%s", str, separator);
				break;
		}
		n++;
	}
	printf("\n");
	va_end(ap);
}
