#include "variadic_functions.h"
/**
 * print_all - prints all
 * @format: string
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int i = 0;
	char *s = "", *str;

	va_start(ap, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 's':
				str = va_arg(ap, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s%s", s, str);
				break;
			case 'c':
				printf("%s%c", s, va_arg(ap, int));
				break;
			case 'i':
				printf("%s%d", s, va_arg(ap, int));
				break;
			case 'f':
				printf("%s%f", s, va_arg(ap, double));
				break;
			default:
				i++;
				continue;
		}
		s = ", ";
		i++;
	}
	va_end(ap);
	putchar('\n');
}
