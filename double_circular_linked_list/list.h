#ifndef __List__
#define __List__

/**
 * struct List - doubly linked list
 * @str: string - (malloc'ed string)
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 * for Holberton project
 */
#include <stdlib.h>
typedef struct List
{
	char *str;
	struct List *prev;
	struct List *next;
} List;
List *create_node(char *str);
List *add_node_end(List **list, char *str);
List *add_node_begin(List **list, char *str);
#endif
