#include <stdio.h>

int main()
{
    int a[10] = {2, 25, 5, 34, 7, 74, 1, 98, 45, 11};

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
    return 0;
}
