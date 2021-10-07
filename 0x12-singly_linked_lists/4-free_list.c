#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* free_list - frees a list_t list
* @head: pointer to the node
*
* str: node of data
*/

void free_list(list_t *head)

{
list_t *cp;

if (head == NULL)
return;

while (head != NULL)
{
cp = head;
head = head->next;
free(cp->str);
free(cp);
}
}
