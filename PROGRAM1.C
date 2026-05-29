//Write a program to Calculate sum of first N natural numbers.
#include <stdio.h>

int main(){
    int n,sum=0,i;

    printf("enter a number:");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        sum += i;
    }
    printf("sum of first %d natural numbers = %d",n,sum);

    return 0;
}