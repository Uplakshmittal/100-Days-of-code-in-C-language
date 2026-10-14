/*Q51: Write a program to print the following pattern:
    5
   45
  345
 2345
12345
*/
/*
Sample Test Cases:
Input 1:

Output 1:
    5
   45
  345
 2345
12345

*/

#include<stdio.h>

int main()
{
    for(int i=5; i>0; i--)
    {
        for(int j=i-1; j>0; j--)
        {
            printf(" ");
            
        }
        for(int j=i; j<=5; j++)
        {
            printf("%d",j);
            
        }
        printf("\n");
       
        
    }
    return 0;
}