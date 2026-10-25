//Q79: Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/ 

#include <stdio.h>

int main()
{
    int row, col;
    scanf("%d %d", &row, &col);

    int a[row][col];

    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(int d = 0; d < row + col - 1; d++)
    {
        for(int i = row - 1; i >= 0; i--)
        {
            for(int j = 0; j < col; j++)
            {
                if(i + j == d)
                {
                    printf("%d ", a[i][j]);
                }
            }
        }
    }

    return 0;
}