#include<stdio.h>
int main()
{
    int a = 2, b = 1, c = 2, d;

    d = a && b || c;
    printf("%d a, %d b, %d c, %d d",a, b, c, d);
}