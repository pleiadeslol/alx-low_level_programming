#include "main.h"

/**
 * _pow_recursion - return the power of x by y
 *
 * @x: first number
 * @y: second number
 *
 * Return: power of number, -1 if y is lower than 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	return (1);
}
