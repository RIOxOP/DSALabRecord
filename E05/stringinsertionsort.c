#include <stdio.h>
#include<string.h>
void insert(char str[], int n)
{
    int i, j, temp;
    for (i = 1; i < n; i++)
    {
        temp = str[i];
        j = i - 1;
        while(j>=0 && temp<=str[j])
        {
            str[j+1]=str[j];
            j=j-1;
        }
        str[j+1]=temp;
    }
}
int main()
{
    char str[100];
    int n=strlen(str);
    int i;
    printf("Enter the string:");
    scanf("%s", &str);
    insert(str,n);
    printf("The Sorted String is:");
    printf("%s",str);
}
