#include "lists.h"
#include <stdio.h>

/**
* listint_len - returns the number of elements in a linked listint_t list
* @h: pointer to the node
* Return: number of elements
*/

size_t listint_len(const listint_t *h)
{
size_t numb_of_el = 0;
while (h != NULL)
{
numb_of_el++;
h = h->next;
}
return (numb_of_el);
}
