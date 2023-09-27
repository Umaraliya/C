#include <stdio.h>

int main()
{
	int a,i,j,l=1,k,n=4;

	for(i=1;i<=5;i++)
{
	a=l;
	for(j=1;j<=i;j++)
{
	printf("%d ",a);

	//for(k=1;k<2;k++)
{
	a = a+n;
	n--;
}
}
	n=4;
	l++;
	printf("\n");
}
	return 0;
}