#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_list - prints a list
 *
 * @h: head of list
 *
 * Return: number of elements
 */

size_t print_list(const list_t *h)
{
    size_t count = 0;

    while (h)
	{
		if (h->str)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
		count++;
	}
	return (count);
}
