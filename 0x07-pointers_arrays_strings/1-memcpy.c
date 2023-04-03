#include "main.h"

/**
 * _memcpy - copies n char from memo area src to memo area dest
 *
 * @dest: destination array where the content is to be copied
 * @src: source of data to be copied
 * @n: number of bytes to be copied
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *csrc = (char *)src;
	char *cdest = (char *)dest;
	
	for (i = 0; i < n; i++)
	{
		cdest[i] = csrc[i];
	}
	return (dest);
}
