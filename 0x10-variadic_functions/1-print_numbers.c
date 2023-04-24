#include "variadic_functions.h"
/**
 * print_numbers - prints numbers
 * @separator: string
 * @n: argc
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;

	va_start(ap, n);

	while (i++ < n)
		if (separator == NULL || i == n)
			printf("%d", va_arg(ap, int));
		else
			printf("%d%s", va_arg(ap, int), separator);
	va_end(ap);
	putchar('\n');
}
