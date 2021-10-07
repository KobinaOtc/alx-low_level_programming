#include "lists.h"

/**
* print_list - prints all elements of list_t list
* @h: linked list
* Return: number of nodes in list
*/

size_t print_list(const list_t *h)
{
size_t elcount = 0;

while (h != NULL)
{
if (h->str == NULL)
printf("[0] (nil)\n");
else
printf("[%d] %s\n", h->len, h->str);

elcount++;
h = h->next;
}

return (elcount);
}
