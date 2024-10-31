#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "list.h"

// Function to create a new node
List *create_node(char *data) {
    List *newNode = (List *)malloc(sizeof(List));
    if (newNode == NULL) {
        return NULL;
    }
    newNode->str = strdup(data);
    if (newNode->str == NULL) {
        free(newNode);
        return NULL;
    }
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
}

// Function to add a new node to the end of the list
List *add_node_end(List **list, char *str) {
    List *newNode = create_node(str);
    if (newNode == NULL) {
        return NULL;
    }

    if (*list == NULL) {
        // If the list is empty, initialize it with the new node
        newNode->next = newNode;
        newNode->prev = newNode;
        *list = newNode;
    } else {
        // Adjust the pointers to add the new node at the end
        List *last = (*list)->prev;
        newNode->next = *list;
        newNode->prev = last;
        last->next = newNode;
        (*list)->prev = newNode;
    }

    return newNode;
}

// Function to add a new node to the beginning of the list
List *add_node_begin(List **list, char *str) {
    List *newNode = create_node(str);
    if (newNode == NULL) {
        return NULL;
    }

    if (*list == NULL) {
        // If the list is empty, initialize it with the new node
        newNode->next = newNode;
        newNode->prev = newNode;
        *list = newNode;
    } else {
        // Adjust the pointers to add the new node at the beginning
        List *last = (*list)->prev;
        newNode->next = *list;
        newNode->prev = last;
        last->next = newNode;
        (*list)->prev = newNode;
        *list = newNode;
    }

    return newNode;
}

