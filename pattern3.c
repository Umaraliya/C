#include <stdio.h>

int main()
{
	int i,j,k,l;

	for(i=1;i<=4;i++)
{
	for(j=1;j<=i;j++)
{
	printf("%d",i);
}
	printf("\n");
}


	//pase 2

	for(k=1;k<4;k++)
{
	for(l=k;l>=1;l--)
{
	printf("%d",l);
}
	printf("\n");
}
	return 0;
}
