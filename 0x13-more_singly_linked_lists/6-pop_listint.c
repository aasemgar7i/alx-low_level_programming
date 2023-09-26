#include "lists.h"

/**
* pop_listint - main function
* @head: input
*/

int pop_listint(listint_t **head)
{
	listint_t *hok;
	int io = 0;

	if (head == NULL || *head = NULL)
		return 0;

	hok = *head;
	*head = hok->next;
	io = hok->n;
	free(hok);

	return io;
}
