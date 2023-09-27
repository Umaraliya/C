#include <stdio.h>
void sub()
{
    int maths,sci,eng,total,per;

    printf("Enter maths mark");
    scanf("%d",&maths);

    printf("Enter sci mark");
    scanf("%d",&sci);

    printf("Enter eng mark");
    scanf("%d",&eng);

    total=maths+sci+eng;

    per = (total * 100)/300;

    printf("Total is : %d\n",total);
    printf("Per is : %d\n",per);

}

int main()
{
    sub();

    return 0;
}