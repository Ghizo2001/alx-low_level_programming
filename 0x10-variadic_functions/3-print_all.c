#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list args;
	const char *p;
	char *s;

	va_start(args, format);

	for (p = format; *p != '\0'; p++)
	{
		switch (*p)
		{
			case 'c':

				printf("%c", va_arg(args, int));
				break;
			case 'i':

				printf("%d", va_arg(args, int));
				break;
			case 'f':

				printf("%f", va_arg(args, double));
				break;
			case 's':

				s = va_arg(args, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s", s);
				break;
				default:
				continue;
		}
		if (*(p + 1) != '\0')
			printf(", ");
	}
	printf("\n");
	va_end(args);
}
