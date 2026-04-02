#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int data;
    struct ListNode *next;
};

struct ListNode *appendToTail(struct ListNode *head, int value) {
    struct ListNode *newNode = malloc(sizeof(struct ListNode));
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL) {
        return newNode;
    }

    struct ListNode *curr = head;
    while (curr->next != NULL) {
        curr = curr->next;
    }
    curr->next = newNode;
    return head;
}

struct ListNode *addToHead(struct ListNode *head, int value) {
    struct ListNode *newNode = malloc(sizeof(struct ListNode));
    newNode->data = value;
    newNode->next = head;
    return newNode;
}

void printList(struct ListNode *head) {
    struct ListNode *curr = head;
    while (curr != NULL) {
        printf("%d ", curr->data);
        curr = curr->next;
    }
    printf("\n");
}

int main(void) {
    struct ListNode *head = NULL;

    head = appendToTail(head, 10);
    head = appendToTail(head, 20);
    head = appendToTail(head, 30);
    head = addToHead(head, 5);

    printList(head);  /* Expected: 5 10 20 30 */

    return 0;
}