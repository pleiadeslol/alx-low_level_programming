#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end
 * of a listint_t list
 *
 * @head: pointer to the head of the node
 * @n: integer to add
 *
 * Return: address of the new elem, NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *end;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	else
	{
		end = *head;
		while (end->next)
		{
			end = end->next;
		}
		end->next = new;

		return (new);
	}
}
