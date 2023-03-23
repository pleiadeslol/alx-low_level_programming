#include "main.h"
#include <stdio.h>

/**
 * print_line - function that draws a straight line
 *
 * @n: number of times the character _ should be printed
 *
 * Return: always 0
 */

void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
