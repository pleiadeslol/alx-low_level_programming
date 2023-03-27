#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - function that returns the length of a string
 *
 * @s: string
 *
 * Return: length of s
 */

int _strlen(char *s)
{
	int i = 0, sum = 0;
	char c = s[0];

	while (c != '\0')
	{
		sum++;
		c = s[++i];
	}
	return (sum);
}
