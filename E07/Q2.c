#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *link;
};

struct node *start = NULL;
void insend()
{
    int item;
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        printf("\nMemory Not Allocated");
        return;
    }
    else
    {
        printf("Enter a value: ");
        scanf("%d", &item);
        ptr->info = item;
        ptr->link = NULL;
        if (start == NULL)
        {
            start = ptr;
        }
        else
        {
            struct node *temp = start;
            while (temp->link != NULL)
            {
                temp = temp->link;
            }
            temp->link = ptr;
        }
        printf("%d is inserted Successfully\n", item);
    }
}
void delend()
{
    int item;
    struct node *ptr, *prevptr;
    ptr = start;
    if (ptr == NULL)
    {
        printf("\nMemory Not Allocated");
        return;
    }
    while (ptr->link != NULL)
    {
        prevptr = ptr;
        ptr = ptr->link;
    }
    prevptr->link = NULL;
    item = ptr->info;
    free(ptr);
    printf("Item %d is deleted\n", item);
}
void display()
{
    struct node *ptr;
    ptr = start;
    if (ptr == NULL)
    {
        printf("List is empty");
        return;
    }
    else
    {
        while (ptr != NULL)
        {
            printf("\t%d,Address:%d", ptr->info,ptr);
            ptr = ptr->link;
        }
    }
}
int main(){
    int ch;
    while (1)
    {
        printf("\n1.Insert node at the end");
        printf("\n2.Display\n3.Delete from the end\n4.Exit");
        printf("\nEnter your choice=");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            insend();
            break;
        case 2:
            display();
            break;
        case 3:
            delend();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("Invalid");
        }
    }
}