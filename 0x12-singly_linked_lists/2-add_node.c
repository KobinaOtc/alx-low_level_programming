#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
* add_node - adds a node at the beginning of a list
* @head: pointer to the first node
* Return: address of new element
* @str: new node data
*/

list_t *add_node(list_t **head, const char *str)

{
list_t *cp;
char *str1;

cp = malloc(sizeof(list_t));
if (cp == NULL)
return (NULL);

str1 = strdup(str);
cp->str = str1;

cp->next = *head;
cp->len = strlen(str);
*head = cp;

return (*head);
}
