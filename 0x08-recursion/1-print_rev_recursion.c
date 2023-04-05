#include "main.h"

/**
 * _print_rev_recursion - print a string in reverse recursion
 *
 * @s: string
 *
 * Return: always 0
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
