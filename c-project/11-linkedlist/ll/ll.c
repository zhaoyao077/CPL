/**
* file: ll.c
 *
 * It includes the implementation of the linked list
 *
 * Created by ARmi on 2022/8/27.
*/

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include "ll.h"

void Init(LinkedList * list) {
    list->head = NULL;
    list->tail = NULL;
}

void Append(LinkedList *list, int val) {
    Node *node = malloc(sizeof *node);
    if (node == NULL) {
        printf("Error: malloc failed in Append()");
        return;
    }
    node->val = val;

    if (list->tail == NULL) {
        list->head = node;
    } else {
        list->tail->next = node;
    }

    list->tail = node;
    node->next = list->head;

}