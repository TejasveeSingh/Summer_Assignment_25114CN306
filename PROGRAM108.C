//Marksheet generation system
#include <stdio.h>

int main()
{
    char name[30];
    int roll;
    float m1,m2,m3,total,per;

    printf("Enter Roll Number: ");
    scanf("%d",&roll);

    printf("Enter Name: ");
    scanf("%s",name);

    printf("Enter Marks of 3 Subjects: ");
    scanf("%f%f%f",&m1,&m2,&m3);

    total = m1+m2+m3;
    per = total/3;

    printf("\n-----MARKSHEET-----\n");
    printf("Roll No : %d\n",roll);
    printf("Name : %s\n",name);
    printf("Total : %.2f\n",total);
    printf("Percentage : %.2f\n",per);

    if(per>=40)
        printf("Result : PASS");
    else
        printf("Result : FAIL");

    return 0;
}