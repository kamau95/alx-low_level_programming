#include "lists.h"
#include <stdio.h>
/**
* print_dlistint - prints all the elements of a dlistint_t list
* @h: pointer to the head of the list
* Return: the number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
size_t count = 0; /* number of nodes */
const dlistint_t *current = h; /* current node */

/* iterate over the list */
while (current != NULL)
{
/* print the value of the current node */
printf("%d\n", current->n);
/* increment the count */
count++;
/* move to the next node */
current = current->next;
}

/* return the number of nodes */
return (count);
}
