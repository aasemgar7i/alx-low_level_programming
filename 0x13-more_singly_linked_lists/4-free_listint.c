#include "lists.h"

/**
* free_listint - main function
* @head: input
*/

void free_listint(listint_t *head)
{
	listint_t *rest;

	while (head)
	{
		rest = head;
		head = head->next;
		free(rest);
	}
}
