//Q73: Find the sum of each row of a matrix and store it in an array.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15

*/

#include<stdio.h>

int main()
{
    int row, col;
    scanf("%d %d", &row, &col);

    int a[row][col];
    int sum[row];

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(int i = 0; i < row; i++)
    {
        sum[i] = 0;

        for(int j = 0; j < col; j++)
        {
            sum[i] = sum[i] + a[i][j];
        }
    }

    for(int i = 0; i < row; i++)
    {
        printf("%d ", sum[i]);
    }

    return 0;
}