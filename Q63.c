/*Q63: Merge two arrays.

Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/

#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);

    int a[x];

    for(int i = 0; i < x; i++)
    {
        scanf("%d", &a[i]);
    }

    int y;
    scanf("%d", &y);

    int b[y];

    for(int i = 0; i < y; i++)
    {
        scanf("%d", &b[i]);
    }

    int z = x + y;
    int c[z];

  
    for(int i = 0; i < x; i++)
    {
        c[i] = a[i];
    }

  
    for(int i = 0; i < y; i++)
    {
        c[x + i] = b[i];
    }

   
    for(int i = 0; i < z; i++)
    {
        printf("%d ", c[i]);
    }

    return 0;
}