#include "lists.h"

/**
* pop_listint - deletes the head node of a linked list
* @head: pointer to the first element in the linked list
*
* Return: the data inside the element that was deleted,
* or 0 if the list is empty
*/
int pop_listint(listint_t **head)
{
listint_t *new_head;
int data;

if (!head || !*head)
return (0);

data = (*head)->n;
new_head = (*head)->next;
free(*head);
*head = new_head;

return (data);
}

