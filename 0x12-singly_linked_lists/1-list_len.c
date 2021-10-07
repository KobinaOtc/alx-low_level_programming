#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* list_len - returns the number of elements in a linked list
* @h: pointer to the node
* Return: number of elements
*/

size_t list_len(const list_t *h)

{

size_t elcount = 0;

while (h != NULL)
{
elcount++;
h = h->next;
}

return (elcount);
}
