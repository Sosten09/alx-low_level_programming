#include "lists.h"
/**
 * free_listint - frees a linked list
 * @head: listint_t list to free
 */
void free_listint(listint_t *head)
{
	listint_t *alx;

	while (head)
	{
		alx = head->next;
		free(head);
		head = alx;
	}
}

