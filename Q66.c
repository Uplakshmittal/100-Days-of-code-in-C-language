//Q66: Insert an element in a sorted array at the appropriate position.

/*
Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n + 1];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int x;
    scanf("%d", &x);

    int i = n - 1;

    while(i >= 0 && a[i] > x)
    {
        a[i + 1] = a[i];
        i--;
    }

    a[i + 1] = x;
    n++;

    for(int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}