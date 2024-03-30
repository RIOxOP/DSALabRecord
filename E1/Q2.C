#include <stdio.h>
void insert(int a[]);
int main()
{
    int a[10], i, m;
    printf("Enter 9 values into the array: ");
    for (i = 0; i < 9; i++)
    {
        scanf("%d", &a[i]);
    }
    insert(a);
    return 0;
}

void insert(int a[])

{
    int i, n, r, k;
    printf("Enter the element want to insert: ");
    scanf("%d", &n);
    printf("Enter the position of the new element: ");
    scanf("%d", &r);
    for (i = 8; i >= r; i--)
    {
        a[i + 1] = a[i];
    }
    a[r] = n;
    printf("Array after insertion:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
}
