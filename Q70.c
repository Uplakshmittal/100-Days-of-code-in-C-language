//Q70: Rotate an array to the right by k positions.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3

*/

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int k;
    scanf("%d", &k);

    k = k % n;

    for(int j = 0; j < k; j++)
    {
        int temp = a[n - 1];

        for(int i = n - 1; i > 0; i--)
        {
            a[i] = a[i - 1];
        }

        a[0] = temp;
    }

    for(int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}