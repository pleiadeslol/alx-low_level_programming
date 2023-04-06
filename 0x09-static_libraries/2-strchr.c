#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string
 *
 * @s: string to be scanned
 * @c: character to be searched in str
 *
 * Return: pointer to the first occ of the char c in s.
 */

char *_strchr(char *s, char c)
{
	int i;

	if (s == NULL)
		return (NULL);
	i = 0;
	while (s[i] != c && s[i] != '\0')
		i++;
	if (s[i] == c)
		return ((char *)(s + i));
	return (NULL);
}
