#include <stdio.h>

int main()
{
	int i,j,k,l;
	
	for(i=1;i<=2;i++)
{
	for(j=1;j<=i;j++)
{
	printf("%d",i);
}
	printf("\n");
}
	for(k=1;k<=3;k++)
{
	for(l=1;l<=k;k++)
{
	printf("%d",k);
}
	printf("\n");
}
	return 0;
}