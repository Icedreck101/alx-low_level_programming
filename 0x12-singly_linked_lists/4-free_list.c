#include "lists.h"

/**
* free_list - Frees a linked list.
* @head: Pointer to the list_t list to be freed.
*/
void free_list(list_t *head)
{
list_t *current;

while (head != NULL)
{
current = head;
head = head->next;

if (current->str)
free(current->str);
free(current);
}
}

