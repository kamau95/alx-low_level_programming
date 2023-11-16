#include <stdio.h>
#include "lists.h"
/**
 * print_list - prints contents ot the node
 * Return: numbers of nodes
 * @h: pointer of the first node
 */

size_t print_list(const list_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
	if (h->str == NULL)
	{
	printf("[0] (nil)");
	}
	else
	{
	printf("\n%p\n%u\n%p", (void *) h->str, h->len, (void *)h->next);
	}
	node_count++;
	h = h->next;
	}

	return (node_count);
}
