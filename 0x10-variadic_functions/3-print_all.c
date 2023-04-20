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
	const char* format_ptr = format;
	char c;
	int i;
	float f;
	char *s;

	va_start(args, format);

	while (*format_ptr)
	{
		if (*format_ptr == 'c')
		{
			c = va_arg(args, int);
			printf("%c", c);
		}
		else if (*format_ptr == 'i')
		{
			i = va_arg(args, int);
			printf("%d", i);
		}
		else if (*format_ptr == 'f')
		{
			f = va_arg(args, double);
			printf("%f", f);
		}
		else if (*format_ptr == 's')
		{
			s = va_arg(args, char *);
			if (s == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", s);
			}
		}
		format_ptr++;
	}
	printf("\n");
	va_end(args);
}
