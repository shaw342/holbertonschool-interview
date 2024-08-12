#include "search.h"

skiplist_t *linear_skip(skiplist_t *head, int value){
    skiplist_t *current = head;

    if (current == NULL){
        return NULL;
    }
    
    while (current != NULL)
    {
        /* code */
        if (current->n == value){
            return current;
        }

        if (current->express != NULL && current->express->n <= value){
            printf("Value checked at index [%ld] = [%d]\n",current->index,current->n);
            current = current->express;
        }else
        {
            printf("Value checked at index [%ld] = [%d]\n",current->index,current->n);
            current = current->next;
        }
        
    }

    return NULL;
}