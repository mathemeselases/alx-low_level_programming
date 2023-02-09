#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: double pointer to listint_t
 * @n: number of elements in listint_t
 * Return: a poitner to the new node or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode_end;
	listint_t *firstnode;

	newnode_end = malloc(sizeof(listint_t));
	if (newnode_end)
	{
		newnode_end->next = NULL;
		/* the lenght is n anyway */
		newnode_end->n = n;
		if (!*head)
		{
			*head = newnode_end;
			return (newnode_end);
		}
		firstnode = *head;
		while (firstnode->next)
			firstnode = firstnode->next;
		firstnode->next = newnode_end;
		return (newnode_end);
	}
	/* freed memory if it faile and return NULL */
	free(newnode_end);
	return (NULL);
}

