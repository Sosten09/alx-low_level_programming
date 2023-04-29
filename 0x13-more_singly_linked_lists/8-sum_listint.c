#include "lists.h"
/**
 * sum_listint - calculate sum of the data(n).
 * @head: first node in the linked list.
 * Return: sum or 0 if list is empty.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *alx = head;

	while (alx)
	{
		sum += alx->n;

		alx = alx->next;
	}
	return (sum);
}
