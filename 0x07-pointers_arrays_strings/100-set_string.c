#include "main.h"
/**
 * set_string - sets the value of a pointer to a char.
 * @s: pointer to pointer to char, which needs to be updated
 * @to: pointer to char, which points to the string to be assigne
 */
void set_string(char **s, char *to)
{
	*s = to;
}
