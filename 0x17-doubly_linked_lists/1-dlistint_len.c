#include "lists.h"
/**
 * dlistint_len - show us the number of elements 
 * @h: a pointer to the head 
 * Return: the number of elements 
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t num_of_elements;

	num_of_elements = 0;
	while (h)
	{
		h = h->next;
		num_of_elements = num_of_elements + 1;
	}
	return (num_of_elements);
}
