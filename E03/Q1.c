#include <stdio.h>
#include <stdlib.h>
int largest(int *arr, int n);
int main() {
    int n, *ptr;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));
    if (ptr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }
    printf("Enter %d number:\n", n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &ptr[i]);
        
    }
    int large = largest(ptr, n);
    printf("The largest element is: %d\n", large);
    free(ptr);
    return 0;
}
int largest(int *arr, int n) {
    int max = arr[0];
    for (int i = 1; i < n; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

