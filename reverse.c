#include <stdio.h>
#include <stdlib.h>

// Definition for singly-linked list
struct ListNode {
    int val;
    struct ListNode* next;
};

// Function to reverse the linked list
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* prev = NULL;
    struct ListNode* curr = head;
    while (curr != NULL) {
        struct ListNode* nextTemp = curr->next; // store next
        curr->next = prev;                      // reverse pointer
        prev = curr;                            // move prev forward
        curr = nextTemp;                        // move curr forward
    }
    return prev; // new head
}

// Helper to print list
void printList(struct ListNode* head) {
    while (head != NULL) {
        printf("%d -> ", head->val);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {
    // Create list: 1 -> 2 -> 3 -> NULL
    struct ListNode* n1 = malloc(sizeof(struct ListNode));
    struct ListNode* n2 = malloc(sizeof(struct ListNode));
    struct ListNode* n3 = malloc(sizeof(struct ListNode));
    n1->val = 1; n1->next = n2;
    n2->val = 2; n2->next = n3;
    n3->val = 3; n3->next = NULL;

    printf("Original List: ");
    printList(n1);

    struct ListNode* reversed = reverseList(n1);
    printf("Reversed List: ");
    printList(reversed);

    return 0;
}
