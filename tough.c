#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

// Recursive function to reverse the list
struct Node* reverse(struct Node* head) {
    if (head == NULL || head->next == NULL) {
        return head;
    }
    struct Node* rest = reverse(head->next);
    head->next->next = head;
    head->next = NULL;
    return rest;
}

void printList(struct Node* head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = malloc(sizeof(struct Node));
    head->data = 1;
    head->next = malloc(sizeof(struct Node));
    head->next->data = 2;
    head->next->next = malloc(sizeof(struct Node));
    head->next->next->data = 3;
    head->next->next->next = NULL;

    printf("Original List:\n");
    printList(head);

    head = reverse(head);

    printf("Reversed List:\n");
    printList(head);

    return 0;
}
