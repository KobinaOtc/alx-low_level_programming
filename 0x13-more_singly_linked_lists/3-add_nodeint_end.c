#include "lists.h"
#include <stdio.h>

/**
* add_nodeint_end - adds a new node at the end of a listint_t list
* Return: address of the new element,or NULL if it failed
* @head: pointer to the first node
* @n: integer
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *cp; /** cp is the new node to be added at the end*/
listint_t *neow;

cp = malloc(sizeof(listint_t));
if (cp == NULL)
return (NULL);

cp->n = n;
cp->next = NULL;

if (*head == NULL)
*head = cp;

else
{
neow = *head;

while (neow->next != NULL)
neow = neow->next;
neow->next = cp;

}

return (cp);
}
