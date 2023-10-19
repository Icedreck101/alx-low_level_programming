#include "lists.h"

/**
* add_node_end - Adds a new node at the end of a linked list.
* @head: Double pointer to the list_t list.
* @str: String to put in the new node.
* Return: Address of the new element, or NULL if it failed.
*/
list_t *add_node_end(list_t **head, const char *str)
{
if (!head || !str)
return (NULL);

unsigned int len = strlen(str);

list_t *new_node = malloc(sizeof(list_t));
if (!new_node)
return (NULL);

new_node->str = strdup(str);
if (!new_node->str)
{
free(new_node);
return (NULL);
}

new_node->len = len;
new_node->next = NULL;

if (*head == NULL)
{
*head = new_node;
return (new_node);
}

list_t *temp = *head;
while (temp->next)
{
temp = temp->next;
}

temp->next = new_node;

return (new_node);
}

