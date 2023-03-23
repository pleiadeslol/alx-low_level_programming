#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - function that prints numbers but 2 & 4
 *
 * Return: always 0
 */

void print_most_numbers(void)
{
	int i, two, four;

	two = '2';
	four = '4';

	for (i = '0'; i <= '9'; i++)
	{
		if (i != two && i != four)
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
