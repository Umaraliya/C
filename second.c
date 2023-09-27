#include <stdio.h>

void stay()
{
    int a;

    printf("Enter A value :");
    scanf("%d",&a);

    if(a > 0)
    {
        printf("A is positive");
    }
    else
    {
        printf("A is negetive");
    }
    return a;
}

int main()
{
    stay();

    return 0;
}