#include <stdio.h>
#include <conio.h>

void main()

{
	int i,j=0,k,n,a = 1;
	clrscr();
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		printf("%d ",j);
		k = a + j;
		j = a;
		a = k;
	}

	getch();
}