#include "lists.h"

/**
 * insert_nodeint_at_index - a function that inserts a new node at
 *                           a given position
 *
 * @head: pointer to the first node of the list
 * @idx: is the index of the list where the new node should be added
 * @n: element to add to the new node
 *
 * Return: NULL if anything fails or the address of the new node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current;
	unsigned int index = 0;

	current = *head;

	new_node = malloc(sizeof(listint_t));
	if ((*head == NULL) || (new_node == NULL))
		return (NULL);

	new_node->n = n;

	for (index = 0; head != NULL && index < idx - 1; index++)
	{
		current = current->next;
		if (current == NULL)
			return (NULL);
	}

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	while (current)
	{
		if (index == idx - 1)
		{
			new_node->next = current->next;
			current->next = new_node;
			return (new_node);
		}
		index++;
		current = current->next;
	}

	free(new_node);
	return (NULL);
}
