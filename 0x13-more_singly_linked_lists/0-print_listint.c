#include "lists.h"

/**
* print_listint - main function
* @h: input
* Return: number of nodes
*/

size_t print_listint(const listint_t *h)
{
	size_t nodenum = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodenum++;
	}
	return (nodenum);
}
