#include "main.h"
int examine_pal(char *s, int r, int len);
int _strlen_iteration(char *s);
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to be reversed
 *
 * Rreturn: 1 if a string is a palindrome, otherwise 0
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (examine_pal(s, 0, _strlen_iteration(s)));
}
/**
 * _strlen_iteration - Returns the length of the given string.
 * @s: string that its length will be calculated
 * Return: length of the string
 */
int _strlen_iteration(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_iteration(s + 1));
}
/**
 * examine_pal - recursively checks if a given string is a palindrome
 * @s: string to be checked
 * @r: repeated
 * @len: string's length
 *
 * Return: 1 if palindrome otherwise 0
 */
int examine_pal(char *s, int r, int len)
{
	if (*(s + r) != *(s + len - 1))
		return (0);
	if (r >= len)
		return (1);
	return (examine_pal(s, r + 1, len - 1));
}
