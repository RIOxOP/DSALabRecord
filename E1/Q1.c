#include <stdio.h>
int main()
{
    int max(int[]);
    int min(int[]);
    int a[10], i, m, n;
    printf("Enter 10 values into the array:");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    m = max(a);
    n = min(a);
    printf("The Maximun value of the Array is=%d\n", m);
    printf("The Minimun value of the array is=%d", n);
    return 0;
}
int max(int a[])
{
    int i, m;
    m = a[0];
    for (i = 1; i < 10; i++)
    {
        if (m < a[i])
        {
            m = a[i];
        }
    }
    return m;
}
int min(int a[])
{
    int i, n;
    n = a[0];
    for (i = 1; i < 10; i++)
    {
        if (n > a[i])
        {
            n = a[i];
        }
    }
    return n;
}
