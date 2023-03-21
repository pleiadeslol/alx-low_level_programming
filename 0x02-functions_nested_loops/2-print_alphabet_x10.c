#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase.
 *
 * Return: void.
 */

void print_alphabet_x10(void)
{
	char alph;
	int i;

	for (i = 1; i <= 10; i++)
	{
		for (alph = 'a'; alph <= 'z'; alph++)
			_putchar(alph);
		_putchar('\n');
	}
}
