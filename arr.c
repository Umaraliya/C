#include <stdio.h>

int main()
{
	int arr[3][3];
	int i,j,a=3;

	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("Enter value arr[%d][%d] : ",i,j);
			scanf("%d\n",&arr[i][j]);
		}
	printf("\n");
	}
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%d ",arr[j][i]);
		}
	printf("\n");
	}
}