//Q5: Write a program to convert temperature from Celsius to Fahrenheit.


#include<stdio.h>

int main()
{
    float c;
    printf("temperature in celsius= ");
    scanf("%f", &c);

    printf("fahrenheit=%f", (9.0/5.0*c)+32);
    return 0;
}