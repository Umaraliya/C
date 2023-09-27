#include <stdio.h>
void reverse()
{
    int i;

    for(i = 10; i>=1; i--)
    {
        printf("%d ",i);
    }
    printf("\n");
}

int main()
{
    reverse();

    return 0;
}