/*Q60: Count positive, negative, and zero elements in an array.

Sample Test Cases:
Input 1:
5
-1 0 1 2 -2
Output 1:
Positive=2, Negative=2, Zero=1

*/

#include<stdio.h>

int main()
{
    int n;
    int Positive=0;
    int Negative=0;
    int Zero=0;
   
    scanf("%d", &n);
    int a[n];

    for(int i=0; i<n; i++)
    {
       
        scanf("%d", &a[i]);
    }
    for(int i=0; i<n; i++)
    {
        if(a[i]>0)
        {
            Positive++;
        }
        else if(a[i]<0)
        {
            Negative++;
        }
        else
        {
            Zero++;
        }
    }

    printf("Positive=%d, Negative=%d, Zero=%d", Positive, Negative, Zero);

    return 0;
}