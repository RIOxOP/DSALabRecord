#include <stdio.h>
int main()
{
    int Ssort(int [],int);
    int a[100],n,i;
    printf("Enter the size of the array:");
    scanf("%d", &n);
    printf("Enter the elements of the array:");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("The Unsorted array:");
    for(i=0;i<n;i++)
    printf("\t%d",a[i]);
    Ssort(a,n);
    printf("\nThe Sorted array:");
    for(i=0;i<n;i++)
    printf("\t%d",a[i]);
}
int Ssort(int a[],int n){
    int min,i,j,temp;
    for(i=0;i<n-1;i++){
        min=i;
        for(j=i+1;j<n;j++){
            if(a[j]<a[min]){
                min=j;
            }
            if(min!=i){
                temp=a[min];
                a[min]=a[i];
                a[i]=temp;
            }
        }
    }
}