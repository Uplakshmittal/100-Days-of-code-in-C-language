//Q67: Insert an element in an array at a given position.

/*
Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40

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

    int position, x;
    scanf("%d %d", &position, &x);

    for(int i = n; i > position; i--)
    {
        a[i] = a[i - 1];
    }

    a[position] = x;
    n++;

    for(int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}