
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *link;
};
struct node *start = NULL;
void insloc()
{
    int item, loc;
    printf("Enter the location: ");
    scanf("%d", &loc);
    
    if (loc < 1)
    {
        printf("Invalid Location\n");
        return;
    }
    struct node *ptr = start;
    for (int i = 1; i < loc - 1 && ptr != NULL; i++)
    {
        ptr = ptr->link;
    }
    if (ptr == NULL && loc > 1)
    {
        printf("Invalid Location\n");
        return;
    }
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    if (newnode == NULL)
    {
        printf("\nMemory Not allocated\n");
        return;
    }
    printf("Enter a value: ");
    scanf("%d", &item);
    newnode->info = item;
    if (loc == 1)
    {
        newnode->link = start;
        start = newnode;
    }
    else
    {
        newnode->link = ptr->link;
        ptr->link = newnode;
    }
    printf("%d is inserted Successfully\n", item);
}
void search()
{
    struct node *ptr;
    int item, loc = 0;
    ptr = start;
    printf("Enter a value: ");
    scanf("%d", &item);
    while (ptr != NULL)
    {
        loc++;
        if (item == ptr->info)
        {
            printf("Found at location: %d\n", loc);
            return;
        }
        else
            ptr = ptr->link;
    }
    printf("Unsuccessful Search....\n");
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
int main()
{
    int ch;
    while (1)
    {
        printf("\n1.Insert node at any LOC");
        printf("\n2.Display\n3.Search for an element\n4.Exit");
        printf("\nEnter your choice=");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            insloc();
            break;
        case 2:
            display();
            break;
        case 3:
            search();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("Invalid");
        }
    }
}