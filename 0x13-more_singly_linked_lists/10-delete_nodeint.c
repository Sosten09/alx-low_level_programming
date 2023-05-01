
#include "lists.h"

/**
 *delete_nodeint_at_index - deletes a node in a linked list at a certain index
 *@head: pointer to the first element in the list
 *@index: index of the node to delete
 *Return: 1 (Success), or -1 (fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *alx = *head;
	listint_t *kimba = NULL;
	unsigned int x = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(alx);
		return (1);
	}
	while (x < index - 1)
	{
		if (!alx || !(alx->next))
			return (-1);
		alx = alx->next;
		x++;
	}
	kimba = alx->next;
	alx->next = kimba->next;
	free(kimba);

	return (1);
}

