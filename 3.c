#include <stdio.h>

    int maths, eng, guj, per, total;

void marks()
{

    printf("Enter maths mark : ");
    scanf("%d",&maths);

    printf("Enter eng mark : ");
    scanf("%d",&eng);

    printf("Enter guj marks : ");
    scanf("%d",&guj);
} 

void check()
{ 

    total = maths + eng + guj;

    per = (total * 100) / 300;
}

int get()
{
    printf("Total is : %d\n",total);

    printf("Per is : %d\n",per);

    if(per > 90 && per <= 99)
    {
        printf("Grade A");
    }
    else if(per > 80 && per <= 90)
    {
        printf("Grade B");
    }
    else if(per > 70 && per <= 80)
    {
        printf("Grade C");
    }
    else if(per > 50 && per <= 70)
    {
        printf("Grade D");
    }
    else if(per > 33 && per <= 50)
    {
        printf("Grade E");
    }
    else if(per > 0 && per <= 33)
    {
        printf("Fail");
    }
}

int main()
{
    marks();

    check();

    get();

    return 0;
}