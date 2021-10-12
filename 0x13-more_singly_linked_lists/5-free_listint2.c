#include "lists.h"
/**
* free_listint2 - frees a list
* @head: pointer to the node
*/

void free_listint2(listint_t **head)
{
listint_t *cp;
if (head == NULL)
return;

while (*head != NULL)
{
cp = *head;
*head = cp->next;
free(cp);
}
}
