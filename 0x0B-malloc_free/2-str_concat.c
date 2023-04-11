#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concatenates two strings
 * @s1: input 0ne to concat
 * @s2: input two to concat
 *
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	char *j;
	int s1_len;
	int s2_len;

	if (!s1 || !*s1)
	{
		s1 = "";
	}
	if (!s2 || !*s2)
	{
		s2 = "";
	}
	s1_len = strlen(s1);
	s2_len = strlen(s2);

	concat_str = malloc(s1_len + s2_len + 1);
	if (!concat_str)
	{
		return (NULL);
	}
	j = concat_str;
	while (*s1 != '\0')
	{
		*j++ = *s1++;
	}
	while (*s2 != '\0')
	{
		*j++ = *s2++;
	}
	*j = '\0';
	return (concat_str);
}
