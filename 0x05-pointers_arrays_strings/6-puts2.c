#include "main.h"
#include <string.h>

/**
 * puts2 - prints a string, followed by a new line,
 * @str: pointer to the string to print
 * Return: void
 */
void puts2(char *str)
{
int len, i;

len = strlen(str);
for (i = 0; i < len; i += 2)
_putchar(str[i]);
_putchar('\n');
}
