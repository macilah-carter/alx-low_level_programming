#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - function that returns the number of elements in a linked
 * list_t list
 * @h: header pointer
 * Return: number of elements
 */


size_t list_len(const list_t *h)
{
	size_t  i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
