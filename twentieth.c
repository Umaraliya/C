#include <stdio.h>
void even()
{
    int n,i;

    printf("Enter number : ");
    scanf("%d",&n);

    for(i=2; i<=n; i+=2)
    {
        printf("%d ",i);
    }
    printf("\n");
}

int main()
{
    even();

    return 0;
}