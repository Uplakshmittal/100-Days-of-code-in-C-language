//Q11: Write a program to input an integer and check whether it is even or odd using if–else.

/*
Sample Test Cases:
Input 1:
7
Output 1:
7 is odd

Input 2:
12
Output 2:
12 is even

*/

#include<stdio.h>

int main()
{
    int n;
    printf("Enter your number: ");
    scanf("%d", &n);

    if(n%2==0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
    
}