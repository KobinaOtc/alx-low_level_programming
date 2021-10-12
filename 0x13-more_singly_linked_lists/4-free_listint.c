#include "lists.h"
/**
* free_listint - frees a list
* @head: pointer to the node
*/

void free_listint(listint_t *head)
{
listint_t *cp;
if (head == NULL)
return;

while (head != NULL)
{
cp = head;
head = head->next;
free(cp);
}
}
