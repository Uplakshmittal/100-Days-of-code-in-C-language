//Q65: Search in a sorted array using binary search.

/*
Sample Test Cases:
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3

Input 2:
5
1 3 5 7 9
6
Output 2:
-1

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

    int target;
    scanf("%d", &target);

    int low = 0;
    int high = n - 1;
    int result = -1;

    while(low <= high)
    {
        int mid = (low + high) / 2;

        if(a[mid] == target)
        {
            result = mid;
            break;
        }
        else if(target > a[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    if(result == -1)
    {
        printf("-1");
    }
    else
    {
        printf("Found at index %d", result);
    }

    return 0;
}