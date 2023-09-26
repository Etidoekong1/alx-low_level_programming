#include "main.h"

/**
 * set_string - sets the value of a pointer to a char.
 * @s: double pointer to be copied
 * @to: where s gets set to
 *
 * Return: Nothing
 */
void set_string(char **s, char *to)
{
	*s = to;
}
