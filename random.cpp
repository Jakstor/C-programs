#include<stdio.h>
void f(int a[])
{
	a[2]=10;
}
int main()
{
	int a[3]={1,2,3};
	f(a);
	printf("%d",a[2]);
	return(0);
}
