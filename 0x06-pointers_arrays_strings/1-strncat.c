#include "main.h"
#include <string.h>

/**
 * _strncat -  concatenates two strings
 * @dest: A pointer to an char that will be updated
 * @src: A pointer to an char that will be updated
 * @n: value
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
