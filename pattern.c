#include <stdio.h>

int main()
{
	int i,j,l=1,n=3,k;

	for(i=1;i<=5;i++)
{
	for(j=1;j<=i;j++)
{
	printf("%d\t",l);
	l--;
}
	for(k=1;k<2;k++)
{
	l=l+n;
	n=n+2;
}
	printf("\n");
}
return 0;
}