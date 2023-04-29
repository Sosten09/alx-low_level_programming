#include "lists.h"
/**
  *get_nodeint_at_index - returns the node at a certain index.
  *@head: first node in the linked list.
  *@index: index of the node.
  *Return: pointer to the node,or NULL.
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int y = 0;

	listint_t *alx = head;

	while (alx && y < index)
	{
		alx = alx->next;
		y++;
	}
	return (alx ? alx : NULL);
}
