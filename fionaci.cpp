#include<stdio.h>
int main()
{
	int arr[100000];
	int n,a,b,i,c;
	a=-1;
	b=1;
	printf("Enter the size of fibonaci series: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		c=a+b;
		a=b;
		b=c;
		arr[i]=c;
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	return(0);
}
