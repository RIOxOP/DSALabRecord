#include <stdio.h>
int main()
{
    int a[10], i;
    void deletion(int[]);
    printf("Enter 9 values into the array=");
    for (i = 0; i < 9; i++)
    {
        scanf("%d",&a[i]);
    }
    deletion(a);
    return 0;
}
void deletion(int a[]){
    int pos,i,item;
    printf("\n Enter the Position of the item=");
    scanf("%d",&pos);
    item=a[pos];
    for(i=pos;i<=7;i++){
        a[i]=a[i+1];
    }
    printf("\nThe Deleted value is= %d ",item);
    printf("\n After deletion the value are :\n");
    for (i = 0; i < 8; i++)
    {
        printf("%d ",a[i]);
    }
}