#include "lists.h"
/**
 * sum_dlistint - show us the sum of all the data
 * @head: a pointer to the head
 * Return: the sum of all data
 */
int sum_dlistint(dlistint_t *head)
{
int add_data = 0;
while (head != NULL)
{
add_data += head->n;
head = head->next;
}
return (add_data);
}
