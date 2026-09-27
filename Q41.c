//Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/

#include <stdio.h>

int main()
{
    int num, first, last, temp, place = 1, middle;

    scanf("%d", &num);

    last = num % 10;

    temp = num;

    while (temp >= 10)
    {
        temp = temp / 10;
        place = place * 10;
    }

    first = temp;

    middle = (num % place) / 10;

    num = last * place + middle * 10 + first;

    printf("%d", num);

    return 0;
}