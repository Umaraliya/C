#include <stdio.h>
void largest()
{
    int a,b,c;

    printf("Enter A value : ");
    scanf("%d",&a);

    printf("Enter B value : ");
    scanf("%d",&b);

    printf("Enter C value : ");
    scanf("%d",&c);

    if(a > b && a > c)
    {
        printf("A is largest");
    }
    else if(b > a && b > c)
    {
        printf("B is largest");
    }
    else
    {
        printf("C is largest");
    }
}

int main()
{
    largest();

    return 0;
}