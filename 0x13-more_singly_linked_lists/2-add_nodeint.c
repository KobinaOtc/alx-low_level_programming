#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
* add_nodeint - adds a new node at the beginning of a listint_t list
* @n: integer
* Return: address of the new element,or NULL if it failed
* @head: pointer to the first node
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *cp; /** cp is the new node to be added at the beginning*/

cp = malloc(sizeof(listint_t));
if (cp == NULL)
return (NULL);

cp->n = n;
cp->next = *head;
*head = cp;

return (cp);
}
