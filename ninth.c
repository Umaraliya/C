#include <stdio.h>
void divisible()
{
    int n;

    printf("Enter value N : ");
    scanf("%d",&n);

    if(n % 5 == 0)
    {
        printf("Divisible by 5 : %d",n);
    }
    else
    {
        printf("Not divisible by 5 : %d",n);
    }
}

int main()
{
    divisible();

    return 0;
}