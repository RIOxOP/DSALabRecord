#include <stdio.h>
#include <stdlib.h>

struct Product {
    int productNo;
    char name[100];
    int cost;
};

int main() {
    int N, i;
    struct Product *p;

    printf("Enter the number of products: ");
    scanf("%d", &N);

    p = (struct Product *)malloc(N * sizeof(struct Product));
    if (p == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
        0
    }

    for (i = 0; i < N; i++) {
        printf("Enter details for product %d\n", i + 1);
        printf("Product No: ");
        scanf("%d", &p[i].productNo);

        printf("Name: ");
        scanf("%s", p[i].name);

        printf("Cost: ");
        scanf("%d", &p[i].cost);
    }

    printf("\nProducts with cost between 100 and 1000 rupees:\n");
    for (i = 0; i < N; i++) {
        if (p[i].cost >= 100 && p[i].cost <= 1000) {
            printf("Product No: %d, Name: %s, Cost: %d\n",
                   p[i].productNo, p[i].name, p[i].cost);
        }
    }

    free(p);

    return 0;
}
