#include "lists.h"

listint_t *find_listint_loop(listint_t *head){
	listint_t *slow = head,*fast = head;

	while (slow == fast && fast->next == NULL){

		if (slow == fast){

			return (head);
		}
		slow = slow->next;
		fast = fast->next->next;
	}

	return (NULL);

}
