#include<stdio.h>

void prstar(int a);


star(int i, int a)
{
	if(i>a)
	{
		prstar(i);
		printf("\n");
		star(i-1,a);
		
	}
}

void prstar(int a)
{
	if(a>0)
	{
		printf("*");
		prstar(a-1);
		
	}
}

int main()
{	int n;
	scanf("%d",&n);
	star(n,0);
	return(0);
}
