#include "lists.h"

/**
* list_len - Returns the number of elements in a list_t list.
* @h: Pointer to the head of the list.
* Return: The number of nodes in the list.
*/
size_t list_len(const list_t *h)
{
size_t elements_no = 0;

while (h != NULL)
{
elements_no++;
h = h->next;
}

return (elements_no);
}

