#include "lists.h"
/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the first element
 * Return: the data inside the elements that was deleted,or is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *alx;
	int number;

	if (!head || !*head)
		return (0);

	number = (*head)->n;

	alx = (*head)->next;

	free(*head);

	*head = alx;

	return (number);
}
