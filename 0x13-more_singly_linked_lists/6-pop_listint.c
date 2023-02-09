#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: double pointer to the head of the list
 *
 * Return: the head nodes data (n)
 */
int pop_listint(listint_t **head)
{
	int n = 0;
	listint_t *ptraux;
	/* task condition */
	if (*head == NULL)
		return (0);
	n = (*head)->n;
	ptraux = (*head)->next;
	free(*head);
	*head = ptraux;
	return (n);
}
