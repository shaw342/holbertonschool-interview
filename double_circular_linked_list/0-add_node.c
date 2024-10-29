#include "list.h"

List *add_node_end(List **list, char *str){
	List *newNode;
	List *last = *list;

	newNode = (List*) malloc(sizeof(List));

	if (newNode == NULL){

		return (NULL);
	}
	newNode->str = str;
	newNode->next = NULL;

	while (last->next != NULL){
		last = last->next;
	}
	last->next = newNode;
	newNode->prev = last;

	return (*newNode)
}

List *add_node_begin(List **list, char *str){
	List *newNode;
	List *head = *list;
	newNode = (List*) malloc(sizeof(List));

	if (newNode == NULL){
		return (NULL);
	}

	newNode->str = str;
	newNode->next = NULL;
	head->next = newNode;
	newNode->prev = head;

	return (*newNode);
}
