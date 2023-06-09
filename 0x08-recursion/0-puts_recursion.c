#include "main.h"

/**
 * _puts_recursion - prints a string with recursion
 *
 * @s: string
 *
 * Return: always 0
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
	else
		_putchar('\n');
}
