#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end
 * @head: double pointer to the beggining of the list
 * @n: content of the new node
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *last_node;
	dlistint_t *addrs_new_node;

	addrs_new_node = malloc(sizeof(dlistint_t));
	if (addrs_new_node == NULL)
		return (NULL);
	addrs_new_node->next = NULL;
	addrs_new_node->n = n;
	last_node = *head;
	if (last_node == NULL)
	{
		addrs_new_node->prev = NULL;
		*head = addrs_new_node;
		return (addrs_new_node);
	}
	while (last_node->next != NULL)
		last_node = last_node->next;
	last_node->next = addrs_new_node;
	addrs_new_node->prev = last_node;
	return (addrs_new_node);
}

