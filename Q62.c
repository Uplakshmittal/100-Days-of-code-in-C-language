/*Q62: Reverse an array without taking extra space.

Sample Test Cases:
Input 1:
4
1 2 3 4
Output 1:
4 3 2 1

*/

#include<stdio.h>

int main()
{
    int n;
   
    scanf("%d", &n);
    int a[n];
    int j = n-1;
    int x;

    for(int i=0; i<n; i++)
    {
       
        scanf("%d", &a[i]);
    }

    for(int i=0; i<j; i++)
    {
        x=a[i];
        a[i]=a[j];
        a[j]=x;
        j--;
        
    }
    for(int i=0; i<n; i++)
    {
       
        printf("%d ", a[i]);
    }


}