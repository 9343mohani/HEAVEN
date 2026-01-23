// #include<stdio.h>
// int main(){
//     // int a = 10;
//     // int b = 29;
//     //  int c=a+b;
//     // printf("%d",c);
//     // // printf("hii");
//     int num;
//     scanf("enter a number");
//     // printf("enter a number");
//     if(num%2==0){
//     printf("even\n");
    
    
        
//         printf("%d",num);
//     }
    
    
//     return 0;

// }
#include <stdio.h>
#include <stdlib.h>

// Node structure
typedef struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
} Node;

// Function to create a new node
Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

// Insert at the end
void insertEnd(Node** head, int data) {
    Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    Node* temp = *head;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = newNode;
    newNode->prev = temp;
}

// Delete a node by value
void deleteNode(Node** head, int key) {
    Node* temp = *head;
    while (temp != NULL && temp->data != key)
        temp = temp->next;

    if (temp == NULL) return; // Not found

    if (temp->prev != NULL)
        temp->prev->next = temp->next;
    else
        *head = temp->next; // deleting head

    if (temp->next != NULL)
        temp->next->prev = temp->prev;

    free(temp);
}

// Traverse forward
void printForward(Node* head) {
    Node* temp = head;
    printf("Forward: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// Traverse backward
void printBackward(Node* head) {
    if (head == NULL) return;
    Node* temp = head;
    while (temp->next != NULL)
        temp = temp->next; // go to last node

    printf("Backward: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->prev;
    }
    printf("\n");
}

int main() {
    Node* head = NULL;

    insertEnd(&head, 10);
    insertEnd(&head, 20);
    insertEnd(&head, 30);
    insertEnd(&head, 40);

    printForward(head);
    printBackward(head);

    deleteNode(&head, 20);

    printForward(head);
    printBackward(head);

    return 0;
}
