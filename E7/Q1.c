    #include <stdio.h>
    #include <stdlib.h>
    struct node
    {
        int info;
        struct node *link;
    };
    struct node *start;
    void insertbeg()
    {
        struct node *ptr;
        ptr = (struct node *)malloc(sizeof(struct node));
        if (ptr == NULL)
        {
            printf("Overflow");
            return;
        }
        else
        {
            int item;
            printf("Enter a value");
            scanf("%d", &item);
            ptr->info = item;
            ptr->link = start;
            start = ptr;
        }
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
    void delete()
    {
        struct node *temp;
        if (start == NULL)
        {
            printf("List is empty");
            return;
        }
        else
        {
            temp = start;
            start = start->link;
            printf("Deleted item is %d", temp->info);
            printf("\nDeleted item's address is %d", &temp);
            free(temp);
        }
    }

    int main()
    {
        int ch;
        while (1)
        {
            printf("\n1.Insert node at the beginning");
            printf("\n2.Display\n3.Deletion\n4.Exit");
            printf("\nEnter your choice=");
            scanf("%d", &ch);
            switch (ch)
            {
            case 1:
                insertbeg();
                break;
            case 2:
                display();
                break;
            case 3:
                delete();
                break;
            case 4:
                exit(0);
                break;
            default:
                printf("Invalid");
            }
        }
    }