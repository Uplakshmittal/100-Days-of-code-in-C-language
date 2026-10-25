//Q78: Find the sum of main diagonal elements for a square matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15

*/

#include<stdio.h>

int main()
{
    int row, col;
    scanf("%d %d", &row, &col);
    
    int a[row][col];
    for(int i =0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int sum = 0;
for(int i =0; i<row; i++)
    {
        sum = sum + a[i][i];
    }
    printf("%d", sum);

    return 0;

}