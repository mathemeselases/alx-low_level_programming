#include "lists.h"
/**
 * free_listint - frees listint_t
 * @head: pointer to the head of the list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *firstnode;

	while (head != NULL)
	{
		firstnode = head;
		head = head->next;
		free(firstnode);
	}
}
