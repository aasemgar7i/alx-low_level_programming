#include "lists.h"

/**
* add_nodeint - main function
* @head: output
* @n: count of node
* Return: node puts in start
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *atstart;

	atstart = malloc(sizeof(listint_t));
	if (atstart == NULL)
		return (NULL);

	atstart->n = n;
	atstart->next = *head;
	*head = atstart;

	return (atstart);
}
