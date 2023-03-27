#include "main.h"
#include <stdio.h>

/**
 * swap_int - function that swaps the values of two integers
 *
 * @a: first integer
 *
 * @b: second integer
 *
 * Return: always 0
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	int d = *b;

	*a = d;
	*b = c;
}
