#include <stdio.h>
int main()
{
    void bubble(int a[],int n); 
    int n,i,a[100];
    printf("Enter the size of the array=");
    scanf("%d",&n);
    printf("Enter the elements in the array=");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("The Unsorted array is:\n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    bubble(a,n);
    printf("\nThe Sorted array is:\n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }

return 0;
}
void bubble(int a[],int n){
    int i,j,temp,swap;
    for(i=0;i<n-1;i++){
        swap=0;
        for(j=0;j<n-(i+1);j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                swap=1;
            }
        }
        if(swap==0)
        break;
    }
}
