#include <stdio.h>

void circle()
{
    int r,ans;

    printf("Enter radius : ");
    scanf("%d",&r);

    ans = 3.14*r*r;

    printf("Ans is :%d",ans);

    return ans;
}

int main()
{
    circle();

    return 0;
}