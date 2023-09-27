#include <stdio.h>

int mark()
{
    int maths, eng, guj, total;

    printf("Enter maths mark : ");
    scanf("%d",&maths);

    printf("Enter eng mark : ");
    scanf("%d",&eng);

    printf("Enter guj marks : ");
    scanf("%d",&guj);

    total = maths + eng + guj;

    return total;
}

int percent(int getTotal)
{
    int percentage = (getTotal * 100) / 300;

    return percentage;
}

void result(int tot, int per)
{
    printf("Total: %d\n", tot);
    printf("Percentage: %d\n", per);
}

int main()
{
    int getMark = mark();
    int getPercentage = percent(getMark);
    result(getMark , getPercentage);
    return 0;
}