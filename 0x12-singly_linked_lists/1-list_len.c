#include "lists.h"
/**
 * list_len - gives number of elements
 * @h: pointer to list
 * Return: returns number of elements
 */
size_t list_len(const list_t *h)
{
	size_t a = 0;

	while (h != NULL)
	{
		a++;
		h = h->next;
	}
	return (a);
}
