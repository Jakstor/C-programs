#include<stdio.h>
int main()
{
	int t,i;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		int m,n,j,temp,tempb,ans;
		int sum_a=0;
		int sum_b=0;
		scanf("%d",&m);
		scanf("%d",&n);
		for(j=0;j<m;j++)
		{
			scanf("%d",&temp);
			sum_a=sum_a+temp;
		}
		for(j=0;j<n;j++)
		{
			scanf("%d",&tempb);
			sum_b=sum_b+tempb;
		}
		ans=(n*sum_a)+(m*sum_b);
		printf("%d",ans);
	}
	return(0);
}
