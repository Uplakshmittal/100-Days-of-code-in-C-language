//Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

/*
Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3

*/

#include<stdio.h>

int main()
{
    int a, b;
    char ch;
    printf("Enter operation(+,-,*,/,%): ");
    scanf("%c", &ch);
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    switch(ch)
    {
    case '+':
    printf("sum = %d", a+b);
    break;
    
    case '-':
        printf("subtraction = %d", a-b);
        break;

    case '*':
    printf("miltiplication = %d", a*b);
    break;
    
    case '/':
    if(b!=0){
    printf("division = %d", a/b);
    }
    else
{
    printf("Can't divide by zero");
}
break;

    case '%':
    printf("modulus = %d", a%b);
    break;

    default:
    break;
}
return 0;

    }



