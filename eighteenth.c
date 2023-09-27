#include <stdio.h>
void series()
{
    int n,i;

    printf("Enter number : ");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        printf("%d ",i);
    }
    printf("\n");
}

int main()
{
    series();

    return 0;
}