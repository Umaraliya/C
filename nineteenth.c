#include <stdio.h>
void odd()
{
    int n,i;

    printf("Enter number : ");
    scanf("%d",&n);

    for(i=1; i<=n; i+=2)
    {
        printf("%d ",i);
    }
    printf("\n");
}

int main()
{
    odd();

    return 0;
}