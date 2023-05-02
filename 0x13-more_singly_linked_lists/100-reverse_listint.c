#include "lists.h"
/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the first node
 * Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *delete = NULL;
	listint_t *undo = NULL;

	while (*head)
	{
		undo = (*head)->next;
		(*head)->next = delete;
		delete = *head;
		*head = undo;
	}

	*head = delete;
	return (*head);
}
