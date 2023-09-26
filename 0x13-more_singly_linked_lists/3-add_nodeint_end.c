#include "lists.h"

/**
* add_nodeint_end - main function
* @head: output
* @n: input
* Return: new node
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nnode, *cnode;

	nnode = malloc(sizeof(listint_t));
	if (nnode == NULL)
		return (NULL);

	nnode->n = n;
	nnode->next = NULL;

	if (*head == NULL)
	{
		*head = nnode;
		return (nnode);
	}

	cnode = *head;
	while (cnode->next != NULL)
	{
		cnode = cnode->next;
	}
	cnode->next = nnode;

	return (nnode);
}
