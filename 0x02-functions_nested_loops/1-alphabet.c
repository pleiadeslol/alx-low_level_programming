#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * print_alphabet - prints the alphabet
 *
 * Return: void.
 */

void print_alphabet(void)
{
	char alph;	
	for (alph = 'a'; alph <= 'z'; alph++)
		_putchar(alph);
	_putchar('\n');
}
