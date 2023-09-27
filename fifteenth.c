#include <stdio.h>
void smallest()
{
    int a,b;

    printf("Enter A value : ");
    scanf("%d",&a);

    printf("Enter B value : ");
    scanf("%d",&b);

    if(a < b)
    {
        printf("A is smaller than B");
    }
    else
    {
        printf("B is Smaller than A");
    }
}

int main()
{
    smallest();

    return 0;
}