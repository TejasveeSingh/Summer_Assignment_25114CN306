//Quiz Application
#include <stdio.h>

int main()
{
    int ans, score = 0;

    printf("1. Capital of India?\n");
    printf("1.Delhi  2.Mumbai  3.Chennai\n");
    scanf("%d", &ans);

    if(ans == 1)
        score++;

    printf("2. 5 + 7 = ?\n");
    printf("1.10  2.12  3.15\n");
    scanf("%d", &ans);

    if(ans == 2)
        score++;

    printf("3. C language was developed by?\n");
    printf("1.Dennis Ritchie  2.James Gosling  3.Bjarne Stroustrup\n");
    scanf("%d", &ans);

    if(ans == 1)
        score++;

    printf("Your Score = %d/3", score);

    return 0;
}