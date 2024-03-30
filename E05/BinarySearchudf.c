
#include <stdio.h>
int main()
{
    int Bsearch(int a[],int ,int,int);
    int n, a[100],i,x,result;
    printf("Enter the Size of the array:");
    scanf("%d", &n);
    printf("Enter the Elements in the array");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter the element you want to search:");
    scanf("%d",&x);
    result=Bsearch(a,0,n-1,x);
    if(result==-1)
    printf("Element not Found");
    else
        printf("Element Found at %d index position",result);
}
int Bsearch(int a[],int start,int end,int x){
    while(start<=end){
    int mid=start+(end-start)/2;
    if(a[mid]==x)
    return mid;
    if(a[mid]<x)
    start=mid+1;
    if(a[mid]>x)
    end=mid-1;
    }
    return -1;
}