#include<stdio.h>

void prstar(int a);
void prspace(int a);

star(int i, int a)
{
	if(i<a)
	{
		prspace(a-i+1);
		prstar(i);
		printf("\n");
		star(i+1,a);
		
	}
}
pstar(int i, int a)
{
	if(i<a)
	{
		prspace(i+2);
		prstar(a-i-1);
		printf("\n");
		pstar(i+1,a);
		
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
void prspace(int a)
{
	if(a>1)
	{
		printf(" ");
		prspace(a-1);
	}
}

int main()
{
	int i,n;
	scanf("%d",&n);
	star(0,n-1);
	for(i=0;i<n;i++)
	{
		printf("*");
	}
	printf("\n");
	pstar(0,n-1);
	return(0);
}
