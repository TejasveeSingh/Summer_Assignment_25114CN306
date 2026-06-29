//Library management system
#include <stdio.h>

struct Book
{
    int id;
    char name[50];
    char author[30];
};

int main()
{
    struct Book b[5];
    int i;

    for(i=0;i<5;i++)
    {
        printf("\nBook %d\n",i+1);

        printf("Enter Book ID: ");
        scanf("%d",&b[i].id);

        printf("Enter Book Name: ");
        scanf("%s",b[i].name);

        printf("Enter Author Name: ");
        scanf("%s",b[i].author);
    }

    printf("\nLibrary Records\n");

    for(i=0;i<5;i++)
    {
        printf("\nBook ID : %d",b[i].id);
        printf("\nBook Name : %s",b[i].name);
        printf("\nAuthor : %s\n",b[i].author);
    }

    return 0;
}