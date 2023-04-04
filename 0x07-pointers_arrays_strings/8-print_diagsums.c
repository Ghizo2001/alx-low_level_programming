#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - print the sum of the diagonals in square matrix of integers
 * @a: the square matrix of integers
 * @size: the size of the square matrix
 *
 * Return: Always 0 (success)
 */
void print_diagsums(int *a, int size)
{
	int b1, b2, c;

	b1 = 0;
	b2 = 0;

	for (c = 0; c < size; c++)
	{
		b1 = b1 + a[c * size + c];
	}
	for (c = size - 1; c >= 0; c--)
	{
		b2 += a[c * size + (size - c - 1)];
	}
	printf("%d, %d\n", b1, b2);
}
