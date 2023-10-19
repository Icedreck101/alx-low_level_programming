#include "lists.h"

/**
* print_list - Print all elements of a list_t list.
* @h: Pointer to the head of the list.
* Return: The number of nodes in the list.
*/
size_t print_list(const list_t *h)
{
size_t node_count = 0;

while (h != NULL)
{
if (h->str == NULL)
printf("[%d] (nil)\n", h->len);
else
printf("[%d] %s\n", h->len, h->str);

h = h->next;
node_count++;
}

return (node_count);
}

