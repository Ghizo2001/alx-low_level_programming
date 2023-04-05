#include "main.h"
int natural_sqrt_recursion(int n, int r);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number that its square root will be calculated
 *
 * Return:result quare root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (natural_sqrt_recursion(n, 0));
}
/**
 * natural_sqrt_recursion - find the natural square root of a given number
 * @n: the number that its square root will be calculated
 * @r:repeated
 *
 * Return: square root
 */
int natural_sqrt_recursion(int n, int r)
{
	if (r * r > n)
		return (-1);
	if (r * r == n)
		return (r);
	return (natural_sqrt_recursion(n, r + 1));
}
