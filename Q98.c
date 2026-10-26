//Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];

    fgets(str, sizeof(str), stdin);

    int lastSpace = -1;

    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ' ')
        {
            lastSpace = i;
        }
    }

    printf("%c.", str[0]);

    for(int i = 0; i < lastSpace; i++)
    {
        if(str[i] == ' ' && i != lastSpace)
        {
            if(i + 1 < lastSpace)
            {
                printf("%c.", str[i + 1]);
            }
        }
    }

    printf(" ");

    for(int i = lastSpace + 1; str[i] != '\0' && str[i] != '\n'; i++)
    {
        printf("%c", str[i]);
    }

    return 0;
}