#include "lists.h"

/**
 * *add_node_end - adds a new node at the end of a list_t list
 * @head: double pointer to list_t
 * @str: pointer to the first node in list_t
 * return: a poitner to the new node or NULL if it failed
 *
 **/

list_t *add_node_end(list_t **head, const char *str)
{
int runner;
list_t *new_end_node;
list_t *firstnode;
new_end_node = malloc(sizeof(list_t));
runner = 0;
if (new_end_node)
{
new_end_node->str = strdup(str);
if (!new_end_node->str || !str)
{
free(new_end_node);
return (NULL);
/* go through str to know the lenght */
/* and assign this to the len variable */
/* and de-reference to new_end_node */
}
while (new_end_node->str[runner])
runner++;
/* new_end_node will go fordward till is equal to NULL */
new_end_node->next = NULL;
new_end_node->len = runner;
if (!*head)
*head = new_end_node;
return (new_end_node);
/* first node will be equal to the pointer to the */
/* first element of the linked list */
firstnode = *head;
while (firstnode->next)
firstnode = firstnode->next;
firstnode->next = new_end_node;
return (new_end_node);
}
return (NULL);
}
