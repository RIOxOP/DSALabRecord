#include <stdio.h>
int main()
{
    int bsearch(int [], int, int, int);
    int size, arr[100], num, i;
    printf("Enter the size of the array=");
    scanf("%d", &size);
    printf("Enter the elements in the array");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element you want to search");
    scanf("%d", &num);
    int result = bsearch(arr, 0, size - 1, num);
    if(result == -1 )
    printf("Element Not Present....");
    else
    printf("Element present at %d index", result);
    return 0;
}
int bsearch(int arr[], int left, int right, int num)
{
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] == num) // to check element is present in mid
            return mid;
        if (arr[mid] < num) // if x is greater ,ignore left half
            left = mid + 1;
        if (arr[mid] > num) // if x is smaller, ignore right half
            right = mid - 1;
    }
    return -1;
}