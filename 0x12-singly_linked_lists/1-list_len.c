#include "lists.h"
/**
 * list_len - length of list
 * @h: pointer to the first node.
 * Return: numb of nodes in the list
 */
size_t list_len(const list_t *h)
{
	int i;

	if (h == NULL)
	return (0);

	for (i = 1; h->next != NULL; i++)
		h = h->next;
	return (i);

