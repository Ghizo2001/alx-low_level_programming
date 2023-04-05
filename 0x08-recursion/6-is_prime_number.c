#include "main.h"
int natural_prime_number(int n, int r);
/**
 * is_prime_number - check whether a given integer is a prime number or not
 * @n: the number to be checked
 *
 * Return: 1 if n is a prime number, otherwise 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (natural_prime_number(n, n - 1));
}
/**
 * natural_prime_number - Recursively checks if a given number is prime
 * @n: the number ro be checked
 * @r: repeated
 * Return: 1 if n is a prime number, otherwise 0
 */
int natural_prime_number(int n, int r)
{
	if (r == 1)
		return (1);
	if (n % r == 0 && r > 0)
		return (0);
	return (natural_prime_number(n, r - 1));
}
