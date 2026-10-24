//Q76: Check if a matrix is symmetric.

/*
Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

*/

#include <stdio.h>

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

    if(row != col)
    {
        printf("False");
        return 0;
    }

    int symmetric = 1;

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            if(a[i][j] != a[j][i])
            {
                symmetric = 0;
                break;
            }
        }
    }

    if(symmetric == 1)
        printf("True");
    else
        printf("False");

    return 0;
}