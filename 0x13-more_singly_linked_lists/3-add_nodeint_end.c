#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to the first element in the list
 * @n: data to insert
 * Return: pointer to the new node,NULL IF FAILED
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnumb;
	listint_t *alx = *head;

	newnumb = malloc(sizeof(listint_t));
	if (!newnumb)
		return (NULL);

	newnumb->n = n;
	newnumb->next = NULL;

	if (*head == NULL)
	{
		*head = newnumb;
		return (newnumb);
	}

	while (alx->next)
		alx = alx->next;

	alx->next = newnumb;

	return (newnumb);
}
