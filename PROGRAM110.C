//Bank Account System
#include <stdio.h>

int main()
{
    int acc;
    char name[30];
    float balance, deposit, withdraw;

    printf("Enter Account Number: ");
    scanf("%d",&acc);

    printf("Enter Name: ");
    scanf("%s",name);

    printf("Enter Initial Balance: ");
    scanf("%f",&balance);

    printf("Enter Deposit Amount: ");
    scanf("%f",&deposit);

    balance += deposit;

    printf("Enter Withdraw Amount: ");
    scanf("%f",&withdraw);

    if(withdraw<=balance)
        balance -= withdraw;
    else
        printf("Insufficient Balance\n");

    printf("\nFinal Balance = %.2f",balance);

    return 0;
}