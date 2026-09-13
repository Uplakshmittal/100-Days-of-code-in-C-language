//Q4: Write a program to calculate the area and circumference of a circle given its radius.



#include<stdio.h>

int main()
{
    int r;
    printf("radius= ");
    scanf("%d", &r);

    printf("area=%f, circumference=%f", 3.14*r*r, 2*3.14*r);
    return 0;
}