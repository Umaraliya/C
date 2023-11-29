#include <stdio.h>

int binary_search(int x, int min, int max)
{
    int mid = min+(max-min)/2;

    if(x == mid)
    {
        return 1;
    }
    else if (x > mid)
    {
        min = mid;
        return binary_search(x, min, max);
    }
    else if (x < mid)
    {
        max = mid;
        return binary_search(x, min, max);
    }
    else
    {
        return -1;
    }
}
int main()
{
    int a[10] = {2, 25, 5, 34, 7, 74, 1, 98, 45, 11}, min, max, x = 2, result;

    for(int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if(a[i] > a[j])
            {
                a[j] = a[i] + a[j];
                a[i] = a[j] - a[i];
                a[j] = a[j] - a[i];
            }
        }
    }
        printf("Orders...");

        for (int i = 0; i < 10; i++)
        {
            printf("%d ",a[i]);
        }
        printf("\n");

        min = a[0];
        max = a[9];

        result = binary_search(x, min, max);

        if(result == 1)
        {
            printf("x is present.");
        }
        else
        {
            printf("x is not present.");
        }
    return 0;
}
