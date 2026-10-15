/*Q59: Count even and odd numbers in an array.

Sample Test Cases:
Input 1:
6
1 2 3 4 5 6
Output 1:
Even=3, Odd=3

Input 2:
4
2 4 6 8
Output 2:
Even=4, Odd=0

*/

#include<stdio.h>

int main()
{
    int n;
   
    scanf("%d", &n);
    int a[n];
    int x=0;
    int y=0;

    for(int i=0; i<n; i++)
    {
       
        scanf("%d", &a[i]);
    }
    for(int i=0; i<n; i++)
    {
        if(a[i]%2==0)
        {
            x++;
        }
        else
        {
            y++;
        }
    }
    
    
    printf("Even=%d, Odd=%d", x,y);

    return 0;
}