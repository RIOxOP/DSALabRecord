#include <stdio.h>
#include <stdlib.h>

struct node   
{  
    struct node *prev;   
    int data;  
    struct node *next;   
};

struct node *head = NULL;  

void insertend(){
    struct node *ptr, *temp;
    int item;
    ptr = (struct node *)malloc(sizeof(struct node));
    if(ptr == NULL){
        printf("\nOVERFLOW\n");
    }
    else{
        printf("\nEnter Item value: ");
        scanf("%d",&item);
        ptr->data = item;
        if(head == NULL){
            ptr->next = NULL;
            ptr->prev = NULL;
            head = ptr;
        }
        else{
            temp = head;
            while(temp->next != NULL){
                temp = temp->next;
            }
            temp->next = ptr;
            ptr->prev = temp;
            ptr->next = NULL;
        }
        printf("\nNode inserted\n");
    }
}

void deletelast(){
    if(head == NULL){
        printf("\nUNDERFLOW\n");
    }
    else{
        struct node *temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        if(temp == head){
            head = NULL;
            free(temp);
        }
        else{
            temp->prev->next = NULL;
            free(temp);
        }
        printf("\nLast node deleted\n");
    }
}

void display(){
    if(head == NULL){
        printf("\nList is empty\n");
    }
    else{
        struct node *ptr = head;
        printf("\nNodes in the list: ");
        while(ptr != NULL){
            printf("%d ", ptr->data);
            ptr = ptr->next;
        }
        printf("\n");
    }
}

int main()
{
    int ch;
    while(1){
        printf("\nMenu\n");
        printf("1. Insert at the last\n2. Deletion of last Node\n3. Display all nodes\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            insertend();
            break;
        case 2:
            deletelast();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("Exit\n");
            exit(0);
        default:
            printf("Invalid choice\n");
            break;
        }
    }
    return 0;
}
