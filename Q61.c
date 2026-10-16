/*61: Search for an element in an array using linear search.

Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1

*/

#include<stdio.h>

int main()
{
    int n;
    int b;
    int found=0;
   
    scanf("%d", &n);
    int a[n];

    for(int i=0; i<n; i++)
    {
       
        scanf("%d", &a[i]);
    }
    scanf("%d", &b);

    for(int i=0; i<n; i++)
    {
        if(b==a[i])
        {
            found=1;
            printf("Found at index %d", i);
            break;
        }
        
    }
    if(found==0)
    {
     printf("-1");
    }


}