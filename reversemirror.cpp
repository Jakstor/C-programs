#include<stdio.h>

void prstar(int a);
void prspace(int a);

star(int i, int a)
{
	if(i<a)
	{
		prspace(i);
		prstar(a-i);
		printf("\n");
		star(i+1,a);
		
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
void prspace(int a)
{
	if(a>=1)
	{
		printf(" ");
		prspace(a-1);
	}
}

int main()
{
	star(0,5);
	return(0);
}
