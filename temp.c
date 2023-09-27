#include <stdio.h>

int main()

{
	int arr[3][3];
	int sum=0,i,j;

	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("Enter arr[%d][%d] value : ",i,j);
			scanf("%d",&arr[i][j]);
		}
		printf("\n");
	}
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			if(i == j)
			{
				sum+=arr[i][j];
			}
		printf("%d",arr[i][j]);
		}
		printf("\n");
	}
	printf("Answer : %d",sum);
	
	return 0;
}