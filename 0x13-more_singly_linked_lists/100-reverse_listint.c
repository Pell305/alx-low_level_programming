#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list.
 * @head: A pointer to the pointer of the head node.
 *
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *current = *head;
	listint_t *next_node = NULL;

	while (current != NULL)
	{
		next_node = head->next;
		head->next = prev;
		prev = head;
		head = next_node;
	}

	*head = prev;
	return (*head);
}
