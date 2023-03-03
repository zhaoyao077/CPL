//
// Created by ARmi on 2022/8/27.
//
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "ll/ll.h"

void SitAroundCircle(LinkedList *list, int num);
void PlayUntilOne(LinkedList *list);
int GetSurvivor(const LinkedList *list);
void PrintList(LinkedList *list);
bool IsEmpty(const LinkedList *list);
bool IsSingleton(const LinkedList *list);
void Delete(LinkedList *list, Node *prev);

#define NUM 10

int main(int argc, char *argv[]) {
    printf("Josephus.c\n");

    LinkedList list;
    Init(&list);
    SitAroundCircle(&list,NUM);
    PrintList(&list);
    PlayUntilOne(&list);
    printf("\nThere %d people in total. The survivor is %d.\n", NUM, GetSurvivor(&list));

    return 0;
}


bool IsEmpty(const LinkedList *list) {
    return list->head == NULL;
}


bool IsSingleton(const LinkedList *list) {
    return !IsEmpty(list) && list->head == list->tail;
}


void PrintList(LinkedList *list) {
    if(IsEmpty(list)) {
        return;
    }

    // iterator
    Node *iter = list->head;
    do {
        printf("%d ", iter->val);
        iter = iter->next;
    } while (iter != list->head);
}


void SitAroundCircle(LinkedList *list, int num) {
    for (int i = 1; i <= num; i++) {
        Append(list, i);
    }
}


void Delete(LinkedList *list, Node *prev) {
    Node *cur = prev->next;
    Node *next = cur->next;
    prev->next = next;

    if (cur == prev) {
        list->head = NULL;
        list->tail = NULL;
    }

    if(cur == list->head) {
        list->head = next;
    }

    if(cur == list->tail) {
        list->tail = prev;
    }

    free(cur);
}


void PlayUntilOne(LinkedList *list) {
    Node *node = list->head;

    while(! IsSingleton(list)) {
        Delete(list, node);
        node = node->next;
    }
}


int GetSurvivor(const LinkedList *list) {
    return list->head->val;
}
