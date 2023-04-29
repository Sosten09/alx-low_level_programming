#include "lists.h"
/**
 * free_listint2 - frees a linked list
 * @head: pointer to the listint_t list to frees
 */
void free_listint2(listint_t **head)
{
	listint_t *alx;

	if (head == NULL)
		return;

	while (*head)
	{
		alx = (*head)->next;

		free(*head);

		*head = alx;
	}

	*head = NULL;
}
