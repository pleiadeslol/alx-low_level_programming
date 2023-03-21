#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * _abs - main function
 *
 * @n: integer to make absolute
 *
 * Return: absolute value of integer
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
}
