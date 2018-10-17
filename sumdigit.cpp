#include<stdio.h>
int main()
{
	int t,n,i,j,l;
	scanf("%d",&t);
	int s=0;
	for(i=0;i<t;i++)
	{
		scanf("%d",&n);
		for(j=n;j!=0;j=j/10)
		{
			l=j%10;
			s=s+l;
			}
		printf("Sum of the digit is %d ",s);
	}
}
