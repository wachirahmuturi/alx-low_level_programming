#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at given idx
 * @head: pointer to head of doubly linked list
 * @index: index
 * Return: 1 if successful, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;

	if (head == NULL || *head == NULL)
		return (-1);

	tmp = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		if (*head != NULL)
			(*head)->prev = NULL;
		return (1);
	}
	while (tmp->next != NULL && index != 0)
	{
		index -= 1;
		tmp = tmp->next;

		if (index == 0)
		{
			(tmp->prev)->next = tmp->next;
			if (tmp->next != NULL)
				(tmp->next)->prev = tmp->prev;
			free(tmp);
			return (1);
		}
	}
	return (-1);
}
