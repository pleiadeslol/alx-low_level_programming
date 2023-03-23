#include "main.h"
#include <stdio.h>

/**
 * print_square - function that prints a square
 *
 * @size: size of the square
 *
 * Return: always 0
 */

void print_square(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
