//Q72: Find the sum of all elements in a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
21

*/

#include<stdio.h>

int main()
{
    int row, col;
    scanf("%d %d", &row, &col);

    int a[row][col];

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int sum = 0;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            sum = sum + a[i][j];
        }
    }

    printf("%d", sum);

    return 0;



}