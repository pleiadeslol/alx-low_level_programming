#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function that allocates memo of array using malloc
 *
 * @nmemb: number of memo spaces
 * @size: size of nmemb
 *
 * Return: pointer that allocated space, or NULL if failure
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	char *p;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);

	for (; i < nmemb * size; i++)
		*(p + i) = 0;

	return (p);
}
