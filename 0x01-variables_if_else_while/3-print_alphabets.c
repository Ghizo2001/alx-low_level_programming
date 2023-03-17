#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry print
 * Return: Always 0 (Success)
 */
int main(void)
{
	char low;

	for (low = 'a'; low <= '2'; low++)
	putchar(low);

	for (low = 'A'; low <= '2'; low++)
	putchar(low);
	putchar('\n');
	
	return (0);
}
