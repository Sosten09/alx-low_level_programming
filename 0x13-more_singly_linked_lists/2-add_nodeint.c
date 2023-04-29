#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a linked list
 * @head: pointer to the first node in the list
 * @n: data to insert
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *kimba;

	kimba = malloc(sizeof(listint_t));
	if (!kimba)
		return (NULL);

	kimba->n = n;
	kimba->next = *head;
	*head = kimba;

	return (kimba);
}

