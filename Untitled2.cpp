#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,a,b,i,j;
		float ans;
		scanf("%d %d %d ",&n,&a,&b);
		float ca=0.0;
		int cb=0;
		int temp[10000];
		for(i=0;i<n;i++)
		{
			scanf("%d",&temp[i]);
		}
		for(i=0;i<n;i++)
		{
			if(a==temp[i])
			{
				ca++;
			}
		}
		for(i=0;i<n;i++)
		{
			if(b==temp[i])
			{
				cb++;
			}
		}
		
		ans=(ca*cb)/(n*n);
		printf("%f\n",ans);
	}
	return(0);
}
