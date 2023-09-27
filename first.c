#include <stdio.h>

void getData()
{
    int a, b;

    printf("Enter A value :");
    scanf("%d",&a);

    printf("Enter B value :");
    scanf("%d",&b);

    if(a > b)
    {
        printf("A is big %d", a);
    }
    else
    {
        printf("B is big %d", b);
    }
}

int main()
{
    getData();

    return 0;
}