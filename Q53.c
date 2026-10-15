/*Q53: Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*

Sample Test Cases:
Input 1:

Output 1:
*
***
*****
*******
*********
*******
*****
***
*

*/


#include<stdio.h>

int main()
{
    for(int i=1; i<10; i++)
    {
        if(i<=5)
        {
            for(int j=1; j<=2*i-1; j++)
            {
                printf("*");  
            }
            
        }
        else
        {
            for(int j=1; j<=19-2*i; j++)
            printf("*");
        }
        printf("\n");
    }
    return 0;
}