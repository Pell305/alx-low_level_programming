#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t linked list.
 * @h: A pointer to the pointer of the head node.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *current = *h;
	listint_t *next_node = NULL;

	while (current != NULL)
	{
		count++;
		next_node = current->next;
		free(current);
		current = next_node;

		/* If the next node is revisited, it's a loop; break it */
		if (next_node == *h)
		{
			*h = NULL;
			break;
		}
	}

	return (count);
}
