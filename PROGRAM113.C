//Menu Driven Calculator
#include <stdio.h>

int main()
{
    int choice;
    float a,b;

    printf("Enter two numbers: ");
    scanf("%f%f",&a,&b);

    printf("\n1.Add\n2.Subtract\n3.Multiply\n4.Divide\n");
    printf("Enter Choice: ");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
            printf("Answer = %.2f",a+b);
            break;

        case 2:
            printf("Answer = %.2f",a-b);
            break;

        case 3:
            printf("Answer = %.2f",a*b);
            break;

        case 4:
            if(b!=0)
                printf("Answer = %.2f",a/b);
            else
                printf("Division by zero not possible.");
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}