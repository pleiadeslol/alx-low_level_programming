#include "main.h"
#include "6-abs.c"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * print_last_digit - main function
 *
 * @n: integer to get last digit of
 *
 * Return: the value of the last digit
 */

int print_last_digit(int n)
{
	_putchar('0' + _abs(n % 10));
	return (_abs(n % 10));
}
