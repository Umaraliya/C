#include <stdio.h>
#include <conio.h>

void main()

{
	int slab, total;
	clrscr();

	printf("Enter value slab");
	scanf("%d",&slab);

	if(slab <= 2500)
	{
		total = slab * 0.0;
	}

	else if(slab >= 2500 && slab <= 5000)
	{
		slab = slab - 2500;

		total = slab * 0.1;

		total = total + 0;
	}

	else if(slab >= 5000 && slab <= 10000)
	{
		slab = slab - 5000;

		total = slab * 0.2;

		total = total + 250;
	}
	else if(slab >= 10000)
	{
		slab = slab - 10000;

		total = slab * 0.3;

		total = total + 250 + 1000;
	}
		printf("Total is :%d",total);

	getch();
}