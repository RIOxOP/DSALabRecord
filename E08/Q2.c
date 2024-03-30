#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* front = NULL;
struct Node* rear = NULL;

void insert() {
    int item;
    printf("Enter item to insert: ");
    scanf("%d", &item);
    
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    newNode->data = item;
    newNode->next = NULL;
    if (rear == NULL) {
        front = rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }
    printf("%d inserted into queue.\n", item);
}

int delete() {
    if (front == NULL) {
        printf("Queue is empty.\n");
        exit(1);
    }
    struct Node* temp = front;
    int item = temp->data;
    front = front->next;
    if (front == NULL) {
        rear = NULL;
    }
    free(temp);
    return item;
}

void display() {
    if (front == NULL) {
        printf("Queue is empty.\n");
        return;
    }
    printf("Queue: ");
    struct Node* current = front;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int main() {
    int ch;

    while (1) {
        printf("\nLinked Queue Operations:\n");
        printf("1. Insert\n2. Delete\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                insert();
                break;
            case 2:
                printf("Deleted item: %d\n", delete());
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exit");
                exit(0);
            default:
                printf("Invalid choice");
        }
    }

    return 0;
}
