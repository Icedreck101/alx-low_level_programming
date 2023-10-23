#include "lists.h"

/**
* listint_len - returns the number of elements in a linked list
* @h: linked list of type listint_t to traverse
*
* Return: number of nodes
*/
size_t listint_len(const listint_t *h)
{
/* Declare and initialize a variable to count the nodes */
size_t count = 0;

/* Traverse the linked list and count the nodes */
while (h)
{
count++;
h = h->next;
}

return (count);
}

