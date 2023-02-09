#include "lists.h"

/**
* print_listint_safe - prints a list but safely
* @head: the head node. pointer
*
* Description: dont wanna print a infinite loop
*	either match addresses or free the head so cant loop back
* Return: the count number
*
*/

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	size_t index = 0;
	listint_t const **array;/* A */

	array = malloc(sizeof(listint_t *) * 1024);
	if (!array)
		exit(98);
	unsigned int i = 0;
	unsigned int flag = 0;

	while (head != NULL)/* B */
	{
		for (i = 0; i < count; i++)/* C*/
		{
			if (head == array[i])/* D */
			{
				flag = 1;
				index = i;
				break;
			}
			else
				flag = 0;
		}

		if (flag == 1)/* E */
			break;
		array[count] = head;
		head = head->next;
		count++;
	}

	i = 0;
	while (i < count)/* F */
	{
		printf("[%p] %d\n", (void *)array[i], array[i]->n);
		i++;
	}
	if (flag == 1)/* G */
	{
		printf("-> [%p] %d\n", (void *)array[index], array[index]->n);
	}
	free(array);
	return (count);
}
