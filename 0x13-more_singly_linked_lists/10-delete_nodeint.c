include "lists.h"

/**
 *delete_nodeint_at_index - deletes node at given index
 *@head: address of pointer to first node
 *@index: index of node to delete
 *
 *
 *Return: 1 on success, -1 on failure
 *
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *current;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(node);
		return (1);
	}
	current = NULL;
	node = *head;
	while (i < index - 1)
	{
		if (!node || !(node->next))
			return (-1);
		
		node = node->next;
		index++;
	}
	current = node->next;
	node->next = current->next;
	free(current);

	return (1);
}
