#include <stdio.h>
void print_this(void) __attribute__ ((constructor));
/**
 * print_this - prints a sentence before the main
 * function is executed
 */
void print_this(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
