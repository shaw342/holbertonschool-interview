#include "lists.h"

int check_cycle(listint_t *list)
{
	listint_t *current = list->next;
	if (list == NULL)
		return 1;

	while (current != NULL && current != list)
	{
		current = current->next;
	}

	return (current == list);
}
