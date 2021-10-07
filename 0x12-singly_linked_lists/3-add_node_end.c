#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* add_node_end - adds a new node at the end of a list
* @head: pointer to the last node
* @str: node of data
* Return: address of new element
*/

list_t *add_node_end(list_t **head, const char *str)

{

list_t *cp = NULL;
char *str1;
list_t *neow;

cp = *head;
neow = malloc(sizeof(list_t));
if (neow == NULL)
return (NULL);
if (str == NULL)
return (NULL);
str1 = strdup(str);

if (str1 == NULL)
{
free(neow);
return (NULL);
}

neow->len = strlen(str);
neow->str = str1;
neow->next = NULL;

if (*head == NULL)
{
*head = neow;
return (neow);
}

while (cp->next != NULL)
cp = cp->next;
cp->next = neow;

return (neow);
}
