#include <stdio.h>
#include <string.h>
void sortstring(char str[]) {
    int length = strlen(str);
    char temp;

    for (int i = 0; i < length - 1; i++) {
        for (int j = 0; j < length - 1 - i; j++) {
            if (str[j] > str[j + 1]) {
                temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
}
int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    sortstring(str);
    printf("Sorted String: %s\n", str);
    return 0;
}
