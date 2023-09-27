#include <stdio.h>

void rectangle()
{
    int a,w,l;

    printf("Enter value W : ");
    scanf("%d",&w);

    printf("Enter value L : ");
    scanf("%d",&l);

    a = w * l;

    printf("A is : %d\n",a);
}

int main()
{
    rectangle();

    return 0;
}