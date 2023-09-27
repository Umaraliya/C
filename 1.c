#include <stdio.h>
int getData(int a)
    {

    int b,c = 0;

    while(a > 0)
    {
    b = a % 10;
    c = c * 10 + b;
    a = a / 10;
    }

    return c;
}

int main()
{
    int n;

    printf("Enter number : ");
    scanf("%d",&n);

    int ans = getData(n);

    printf("Ans is : %d",ans);

    return 0;
}