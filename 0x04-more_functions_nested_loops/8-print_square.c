#include "main.h"
#include <stdio.h>
/**
 * main - prints a square, followed by a new line
 * @n: new line
 * Return: Always!
 */

void print_square(int size)
{
    int i, j;

    if (size <= 0)
    {
        _putchar('\n');
        return;
    }

    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            _putchar('#');
        }
        _putchar('\n');
    }
}

