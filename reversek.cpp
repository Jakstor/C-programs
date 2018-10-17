#include<stdio.h>

void prstar(int a);


star(int i, int a)
{
	if(i<a)
	{
		prstar(i);
		printf("\n");
		star(i+1,a);
		
	}
}

pstar(int i, int a)
{
	if(i>a)
	{
		prstar(i-1);
		printf("\n");
		pstar(i-1,a);
		
	}
}

void prstar(int a)
{
	if(a>=0)
	{
		printf("*");
		prstar(a-1);
		
	}
}

int main()
{	int i,n;
	scanf("%d",&n);
	star(0,n);
	for(i=0;i<=n;i++)
	{
		printf("*");
	}
	printf("\n");
	pstar(n,0);
	return(0);
}
