#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything based on a format
 * @format: format string containing format specifiers
 * @...: variadic parameters to print
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char c;
	char *sep = "";

	va_start(args, format);

	while (format && format[i])
	{
		c = format[i];
		if ((c == 'c' || c == 'i' || c == 'f' || c == 's'))
		{
			if (c == 'c')
				printf("%s%c", sep, va_arg(args, int));
			else if (c == 'i')
				printf("%s%d", sep, va_arg(args, int));
			else if (c == 'f')
				printf("%s%f", sep, (double)va_arg(args, double));
			else if (c == 's')
			{
				char *str = va_arg(args, char *);
				if (str == NULL)
					printf("%s(nil)", sep);
				else
					printf("%s%s", sep, str);
			}
			sep = ", ";
		}
		i++;
	}

	va_end(args);

	printf("\n");
}
