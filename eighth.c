#include <stdio.h>
void third()
{
    int a,b;

    printf("Enter A value : ");
    scanf("%d",&a);

    printf("Enter B value : ");
    scanf("%d",&b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("A is : %d\n",a);
    printf("B is : %d\n",b);
}

int main()
{
    third();

    return 0;
}