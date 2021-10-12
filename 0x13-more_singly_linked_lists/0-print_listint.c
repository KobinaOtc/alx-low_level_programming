#include "lists.h"
#include <stdio.h>

/**
* print_listint - prints all elements of listint_t list
* Return: number of nodes
* @h:  pointer to the list
*/

size_t print_listint(const listint_t *h)
{
size_t numb_of_nodes = 0;
while (h != NULL)
{
printf("%d\n", h->n);
numb_of_nodes += 1;
h = h->next;
}

return (numb_of_nodes);
}
