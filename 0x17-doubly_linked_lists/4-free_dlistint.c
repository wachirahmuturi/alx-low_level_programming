#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - frees a doubly linked list with only int data, no strings
 * @head: pointer to head of list
 */
void free_dlistint(dlistint_t *head)
{
	if (!head)
		return (-1);

	while ((head != NULL) && (head->next != NULL))
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
