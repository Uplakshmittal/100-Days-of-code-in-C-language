//Q87: Count spaces, digits, and special characters in a string.

/*
Sample Test Cases:
Input 1:
a b1&2
Output 1:
Spaces=1, Digits=2, Special=1

*/
#include<stdio.h>

int main()
{
    char str[100];
    fgets(str, sizeof(str), stdin);

    int spaces = 0;
    int digits = 0;
    int special = 0;

    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ' ')
        {
            spaces++;
        }
        else if(str[i] >= '0' && str[i] <= '9')
        {
            digits++;
        }
        else if((str[i] >= 'a' && str[i] <= 'z') ||
                (str[i] >= 'A' && str[i] <= 'Z'))
        {
            // alphabet, so do nothing
        }
        else if(str[i] != '\n')
        {
            special++;
        }
    }

    printf("Spaces=%d, Digits=%d, Special=%d",
           spaces, digits, special);

    return 0;
}