#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars and
 * initializes it with a specific char.
 *
 * @size: size of the array
 * @c: char to initialize with
 * Return: NULL if size=0, pointer to array or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *t;
	unsigned int i;

	if (size <= 0)
		return (NULL);
	t = malloc(sizeof(char) * size);

	if (t == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		t[i] = c;

	return (t);
}
