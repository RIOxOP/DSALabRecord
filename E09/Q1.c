#include <stdio.h>
#include <stdlib.h>

struct node   
{  
    struct node *prev;   
    int data;  
    struct node *next;   
};

struct node *head = NULL;  

void insertbeg()  
{  
    struct node *ptr;   
    int item;  
    ptr = (struct node *)malloc(sizeof(struct node));  
    if(ptr == NULL)  
    {  
        printf("\nOVERFLOW\n");  
    }  
    else  
    {  
        printf("\nEnter Item value: ");  
        scanf("%d",&item);  
        
        if(head == NULL)  
        {  
            ptr->next = NULL;  
            ptr->prev = NULL;  
            ptr->data = item;  
            head = ptr;  
        }  
        else   
        {  
            ptr->data = item;  
            ptr->prev = NULL;  
            ptr->next = head;  
            head->prev = ptr;  
            head = ptr;  
        }  
        printf("\nNode inserted\n");  
    }  
}  

void delete1st(){
    if(head == NULL){
        printf("\nUNDERFLOW\n");
    }
    else{
        struct node *temp = head;
        head = head->next;
        if(head != NULL){
            head->prev = NULL;
        }
        free(temp);
        printf("\nFirst node deleted\n");
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
        printf("1. Insert at the beginning\n2. Deletion of 1st Node\n3. Display all nodes\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            insertbeg();
            break;
        case 2:
            delete1st();
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
