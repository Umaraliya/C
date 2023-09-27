#include <stdio.h>

int array()
{
    int b;
    printf("Enter value : ");
    scanf("%d", &b);

    return b;
}

void print(int c)
{
    printf("%d ", c);
}
int main()
{
    int a[5], i;
    for (i = 0; i < 5; i++)
    {
        a[i] = array();
    }
    for (i = 0; i < 5; i++)
    {
        print(a[i]);
    }
    return 0;
}
