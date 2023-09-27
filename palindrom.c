#include <stdio.h>

int main()
{
	int a,b=0,c=0,d,i,n;

	printf("Enter a number : ");
	scanf("%d",&n);

	d = n;
	
	for(i=0; n>=0; i++)
	{
		b=n%10;
		c=b+c;
		c=c*10;
		n=n/10;
		
	}

	if(c == d)
	{
		printf("It's palindrom");
	}
	else
	{
		printf("It's not a palindrom %d",c);
	}
return 0;
}