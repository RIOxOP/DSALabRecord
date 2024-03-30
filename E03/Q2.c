#include <stdio.h>
struct student
{
    int roll;
    char name[20];
    int age;
};
struct student s[5];
int main()
{
    void disp(struct student[]);
    int i;
    printf("Enter the Roll,Name and age of five stuidents:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d%s%d", &s[i].roll, s[i].name, &s[i].age);
    }
    disp(s);
}
void disp(struct student s[])
{
    int i;
    printf("The  student information whose age is above 20 is: ");
    for(i=0;i<5;i++){
        if(s[i].age>=20){
            printf("%d %s %d\n",s[i].roll, s[i].name,s[i].age);
        }
    }
}
