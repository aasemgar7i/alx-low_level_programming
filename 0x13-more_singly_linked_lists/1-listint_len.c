#include "lists.h"

/**
* listint_len - main function
* @h: input
* Return: node numbers
*/

size_t listint_len(const listint_t *h)
{
	size_t numnode = 0;

	while (h)
	{
		numnode++;
		h = h->next;
	}
	return (numnode);
}
