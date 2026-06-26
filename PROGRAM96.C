//Remove Duplicate Characters
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, j;

    printf("Enter string: ");
    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i++)
    {
        for(j = i + 1; str[j] != '\0'; )
        {
            if(str[i] == str[j])
                strcpy(&str[j], &str[j + 1]);
            else
                j++;
        }
    }

    printf("%s", str);

    return 0;
}