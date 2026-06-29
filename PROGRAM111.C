//Ticket Booking System
#include <stdio.h>

int main()
{
    char name[30];
    int tickets;
    float price,total;

    printf("Enter Customer Name: ");
    scanf("%s",name);

    printf("Enter Number of Tickets: ");
    scanf("%d",&tickets);

    price = 250;

    total = tickets * price;

    printf("\nTicket Booking Details\n");
    printf("Customer : %s\n",name);
    printf("Tickets : %d\n",tickets);
    printf("Total Amount : %.2f",total);

    return 0;
}