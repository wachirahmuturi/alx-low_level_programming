#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - add node to end of doubly linked list
 * @head: pointer to head of list
 * @n: node data
 * Return: address of new node, or Null if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *last; /*used to access the last node of the doubly llist*/

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	/* if linked list is empty */
	if (*head == NULL)
	{
		*head = new;
		new->next = NULL;
		new->prev = NULL;
		return (new);
	}

	/* if regular linked list */
	/*traverse to last node and insert new node*/
	last = *head;
	while (last->next != NULL)
		last = last->next;
	new->prev = last;
	new->next = NULL;

	last->next = new;
	return (new);
}
