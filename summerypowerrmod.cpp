#include<stdio.h>
int main()
{
	int i,t,n,k;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&n,&k);
		int arr[100005];
		char str[100005];
		scanf("%s",str);
		arr[0]=0;
		long long ans=0;
		long long pp=0;
		for(i=1;i<n;i++)
		{
			arr[i]=str[i]!=str[i-1]?1:0;
		}
		for(i=1;i<=k;i++)
		{
			pp=pp+arr[i];
		}
		ans=pp;
		for(i=k+1;i<n;i++)
		{
			pp=pp+arr[i]-arr[i-k];
			ans=ans+pp;
		}
		printf("%lld\n",ans);
	}
	return(0);
}
