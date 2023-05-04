#include "main.h"

/**
 * get_bit - gets bit an index
 *
 * @n: number to use
 * @index: index to use
 *
 * Return: int value
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 32)
		return (-1);

	return (n >> index & 1);
}
