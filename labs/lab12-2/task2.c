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

struct ListNode *findNode(struct ListNode *head, int value) {
    struct ListNode *curr = head;
    while (curr != NULL) {
        if (curr->data == value) {
            return curr;
        }
        curr = curr->next;
    }
    return NULL;
}

struct ListNode *deleteNode(struct ListNode *head, int value) {
    if (head == NULL) {
        return NULL;
    }

    /* Special case: target is the head node */
    if (head->data == value) {
        struct ListNode *newHead = head->next;
        free(head);
        return newHead;
    }

    /* General case: find the predecessor */
    struct ListNode *curr = head;
    while (curr->next != NULL && curr->next->data != value) {
        curr = curr->next;
    }

    if (curr->next != NULL) {
        struct ListNode *target = curr->next;
        curr->next = target->next;
        free(target);
    }

    return head;
}

int main(void) {
    /* Build the list from PC1: 5 -> 10 -> 20 -> 30 */
    struct ListNode *head = NULL;
    head = appendToTail(head, 10);
    head = appendToTail(head, 20);
    head = appendToTail(head, 30);
    head = addToHead(head, 5);

    /* Find 20 */
    struct ListNode *found = findNode(head, 20);
    if (found != NULL) {
        printf("Found: %d\n", found->data);
    } else {
        printf("Not found\n");
    }

    /* Delete 20, then print */
    head = deleteNode(head, 20);
    printList(head);   /* Expected: 5 10 30 */

    /* Delete head (5), then print */
    head = deleteNode(head, 5);
    printList(head);   /* Expected: 10 30 */

    return 0;
}