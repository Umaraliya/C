#include <stdio.h>

int main()

{
	int arr[3][3];
	int sum=0,i,j,k=0,l=0,m=0;

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
				k = k+arr[i][j];
			}
		else if(j < i)
		{
			l = l+arr[i][j];
		}
		else
		{
			m = m+arr[i][j];
		}
		}
		printf("\n");
	}
		printf("Answer : %d\n",k);
		printf("Answer : %d\n",l);
		printf("Answer : %d\n",m);

	return 0;
}