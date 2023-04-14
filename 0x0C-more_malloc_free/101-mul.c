#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * multiply - two decimal numbers represented as strings
 * and store the result in another string.
 * @num1:First number as a string
 * @num2: result String to store the result
 * @result: String to store the result
 * Return: 1 if the multiplication was successful, 0 otherwise
 */

int multiply(char *num1, char *num2, char *result)
{
	int len1 = strlen(num1);
	int len2 = strlen(num2);
	int *res = calloc(len1 + len2, sizeof(int));
	int i, j, carry, num1_digit, num2_digit, sum;

	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		num1_digit = num1[i] - '0';

		for (j = len2 - 1; j >= 0; j--)
		{
			num2_digit = num2[j] - '0';
			sum = num1_digit * num2_digit + res[i + j + 1] + carry;
			res[i + j + 1] = sum % 10;
			carry = sum / 10;
		}
		res[i + j + 1] = carry;
	}
	i = 0;
	while (i < len1 + len2 && res[i] == 0)
		i++;
	if (i == len1 + len2)
		strcpy(result, "0");
	else
	{
		int k = 0;

		while (i < len1 + len2)
		{
			result[k++] = res[i] + '0';
			i++;
		}
		result[k] = '\0';
	}
	free(res);
	return (1);
}
/**
 * is_digits - Checks if a string contains only decimal digits
 * @str: String to check
 * Return: 1 if the string contains only decimal digits, 0 otherwise
 */
int is_digits(char *str)
{
	int i = 0;

	if (str[0] == '-' || isdigit(str[0]))
	{
		i++;
		while (str[i])
		{
			if (!isdigit(str[i]))
				return (0);
			i++;
		}
		return (1);
	}
		else
		{
			return (0);
		}
}
/**
 * main - Entry point of the program
 * @argv: array of command line arguments
 * @argc: number of command line arguments
 *
 * Return: 0 if the multiplication was successful, 98 otherwise
 */

int main(int argc, char *argv[])
{
	char result[1000];

	if (argc != 3)
	{
		fprintf(stderr, "Error\n");
		return (98);
	}
	if (!is_digits(argv[1]) || !is_digits(argv[2]))
	{
		fprintf(stderr, "Error\n");
		return (98);
	}
	if (multiply(argv[1], argv[2], result))
	{
		printf("%s\n", result);
		return (0);
	}
	else
	{
		fprintf(stderr, "Error\n");
		return (98);
	}
}
