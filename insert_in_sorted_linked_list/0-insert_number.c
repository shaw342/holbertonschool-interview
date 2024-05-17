#include "lists.h"

listint_t *insert_node(listint_t **head, int number)
{
  listint_t *current = *head;
  listint_t *new;

  new = malloc(sizeof(listint_t));
  new->n = number;
  while(current->next != NULL && current->next->n < number)
  {
    current= current->next;
  }
  new->next = current->next;
  current->next = new;

  return current;
}
