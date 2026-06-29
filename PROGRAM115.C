//Menu Driven String Operation System
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int choice;

    printf("Enter String: ");
    scanf("%s",str);

    printf("\n1.Length\n2.Reverse\n3.Uppercase\n");
    printf("Enter Choice: ");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
            printf("Length = %lu",strlen(str));
            break;

        case 2:
            strrev(str);
            printf("Reverse = %s",str);
            break;

        case 3:
            printf("Uppercase = %s",strupr(str));
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}