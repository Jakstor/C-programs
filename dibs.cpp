#include<stdio.h>
int main()
{
	int t,i;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		int m,n,j,k,a[100],b[100];
		int sum=0;
		int sum1=0;
		scanf("%d %d",&m,&n);
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[j]);
		}
		for(j=0;j<n;j++)
		{
			scanf("%d",&b[j]);
		}
		for(j=0;j<m;j++)
		{
			for(k=0;k<n;k++)
			{
				sum=a[j]+b[k];
				sum1=sum1+sum;
			}
		}
		printf("%d",sum1);
	}
	return(0);
}
