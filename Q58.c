/*Q58: Find the maximum and minimum element in an array.

Sample Test Cases:
Input 1:
5
2 9 1 4 7
Output 1:
Max=9, Min=1

Input 2:
3
10 10 10
Output 2:
Max=10, Min=10

*/

#include<stdio.h>

int main()
{
    int n;
   
    scanf("%d", &n);
    int a[n];

    for(int i=0; i<n; i++)
    {
       
        scanf("%d", &a[i]);
    }
   int max = a[0];
   int min = a[0];
   for(int i=0; i<n; i++)
   {
    if(max<a[i])
    {
        max=a[i];
    }

   }
   for(int i=0; i<n; i++)
   {
    if(min>a[i])
    {
        min = a[i];
    }
   }

   printf("MAX=%d, Min=%d", max, min);

   return 0;

}