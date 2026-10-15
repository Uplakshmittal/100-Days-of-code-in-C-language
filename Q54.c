/*Q54: Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *


Sample Test Cases:
Input 1:

Output 1:
Pattern with layers of stars as shown.

*/

#include<stdio.h>

int main()
{
    for(int i=1; i<=7; i++)
    {
        if(i<=4)
        {
            for(int j=1; j<=4-i; j++)
            {
                printf(" ");
            }
            for(int j=1; j<=2*i-1; j++)
            {
                printf("*");
            }
        }
        else
        {
            for(int j=1; j<=i-4; j++)
            {
                printf(" ");
            }
            for(int j=1; j<=15-2*i; j++)
            {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}