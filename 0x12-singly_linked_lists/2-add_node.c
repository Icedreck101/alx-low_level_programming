#include "lists.h"

/**
* add_node - Adds a new node at the beginning of a linked list.
* @head: Double pointer to the list_t list.
* @str: New string to add in the node.
* Return: The address of the new element, or NULL if it fails.
*/
list_t *add_node(list_t **head, const char *str)
{
if (!head || !str)
return (NULL);

list_t *new_element = malloc(sizeof(list_t));
if (!new_element)
return (NULL);

new_element->str = strdup(str);
if (!new_element->str)
{
free(new_element);
return (NULL);
}

new_element->len = strlen(new_element->str);
new_element->next = *head;
*head = new_element;

return (new_element);
}

