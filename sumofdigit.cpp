#include<stdio.h>
int main()
{
	int t,n,i,j,l;
	scanf("%d",&t);
	int s=0;
	for(i=0;i<t;i++)
	{
		scanf("%d",&n);
		j=n;
		while(j!=0)
		{
			l=j%10;
			s=s+l;
			j=j/10;
		}
		printf("Sum of the digit is %d ",s);
	}
}
