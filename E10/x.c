#include <stdio.h>
int main()
{
    int john, ram, shah;
    printf("input no. of fishes caught by John : ");
    scanf("%d", &john);
    printf("input no. of fishes caught by Ram : ");
    scanf("%d", &ram);    
    printf("input no. of fishes caught by Shah : ");    
    scanf("%d", &shah);  
    (john > ram) ? ((john > shah ? printf("John caught more fishes") : printf("Shah caught more fish"))) : ((ram > shah ? printf("Ram caught more fish") : printf("Shah caught most fish"))) ;
    return 0;
}