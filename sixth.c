#include <stdio.h>

void square()
{
    int a,square;
    printf("Enter the number: "); 
    scanf("%d", &a);

    square = a * a;

    printf("Square is : %d",square);
}

int main()
{
    square();

    return 0;
}