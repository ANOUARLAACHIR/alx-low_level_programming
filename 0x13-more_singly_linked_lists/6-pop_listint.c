#include "lists.h"

/**
 * pop_listint - Removes the head of a listint_t list.
 * @head: points to the address of the
 *        head of the listint_t list.
 *
 * Return: If the linked list is empty -> 0.
 *         Otherwise -> The head node's value (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int ret;

	if (*head == NULL)
		return (0);

	tmp = *head;
	ret = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (ret);
}
