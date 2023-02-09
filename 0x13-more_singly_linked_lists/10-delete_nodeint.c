#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the nodet at index of listint_t list
 * @head: double pointer to the head of the list
 * @index: index of the node should be deleted
 * Return: 1 if it succeeded and -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node;
	unsigned int pos;

	pos = 0;
	while (*head)
	{
		if (pos == index)
		{
			node = (*head);
			(*head) = (*head)->next;
			free(node);
			return (1);
		}
		head = &(*head)->next;
		pos++;
	}
	return (-1);
}
