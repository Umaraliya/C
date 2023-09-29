#include <stdio.h>
#include <conio.h>

void main()
{
	int i,l,j=0,k=1,n;
	clrscr();

	scanf("%d",&n);

	printf("%d %d",j,k);

	for(i=1;i<=n;i++)
	{
		l=j+k;
		printf("%d\t",l);
		j=k;
		k=l;

	}

	getch();
}