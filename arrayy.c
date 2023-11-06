#include <stdio.h>

int main()
{
    int i;
    int maths[3], guj[3], eng[3], total[3], per[3];

    for (i = 0; i < 3; i++)
    {
        printf("Enter mark maths : ");
        scanf("%d",&maths[i]);
        printf("Enter mark gujarati : ");
        scanf("%d",&guj[i]);
        printf("Enter mark english : ");
        scanf("%d",&eng[i]);
    }

    for (i = 0; i < 3; i++)
    {
        total[i] = maths[i] + guj[i] + eng[i];

        // printf("%d ",&total[i]);

        per[i] = total[i]*0.3;

        // printf("%d ",&per[i]);

        printf("maths mark[%d] : %d\n", i, maths[i]);
        printf("gujarati mark[%d] : %d\n", i, guj[i]);
        printf("english mark[%d] : %d\n\n", i, eng[i]);
        printf("total mark[%d] : %d\n\n", i, total[i]);
        printf("percentege mark[%d] : %d\n\n", i, per[i]);
    }
    
    return 0;
}