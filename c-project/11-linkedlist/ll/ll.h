/**
 * file: ll.h
 *
 * It contains the declaration of types and functions.
 * It does not contain the implement of the linked list.
 *
 * Created by ARmi on 2022/8/27.
 */

#ifndef C_PROJECT_LL_H
#define C_PROJECT_LL_H

typedef struct node {
    int val;
    struct node *next;
} Node;

typedef struct ll {
    Node *head;
    Node *tail;
} LinkedList;

void Init(LinkedList * list);

void Free(LinkedList *list);

void Append(LinkedList *list, int val);
#endif //C_PROJECT_LL_H
