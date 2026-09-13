//Q1: Write a program to input two numbers and display their sum.

#include<stdio.h>

int main()
{
    int a, b, sum;
    printf("a= ");
    scanf("%d", &a);
    printf("b= ");
    scanf("%d", &b);

    sum=a+b;

    printf("sum= %d", sum);
    return 0;
}
