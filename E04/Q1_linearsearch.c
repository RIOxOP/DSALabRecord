#include <stdio.h>
int main()
{
    int search(int a[],int n,int x);
    int a[100],n,i,x,result;
    printf("Enter the size of the array");
    scanf("%d",&n);
    printf("Enter the Elements of the array :");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the element to be searched");
    scanf("%d",&x);
    result=search(a,n,x);
    if(result==-1)
    printf("Search Unsuccessful \n");
    else
    printf("Element found at %d index position",result);
return 0;
}
int search(int a[],int n,int x){
    int i;
    for(i=0;i<n;i++){
        if(a[i]==x)
        return i;
    }
    return -1;
}