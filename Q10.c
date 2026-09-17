//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

/*
Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/


#include<stdio.h>

int main()
{
    int t;
    printf("Enter time in seconds: ");
    scanf("%d", &t);

    printf("Time in hours:minutes:seconds= %d:%d:%d", (t/60)/60, t/60, t);

    return 0;
}

