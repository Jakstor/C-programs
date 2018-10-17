#include<stdio.h>
#include<math.h>
int main()
{
	int x,i,j,s,n,p,m,a[100],b[100],arr[100],t_diff,ans;
	scanf("%d",&n);
	s=(n*(n-1))/2;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&p);
	for(i=0;i<p;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			arr[x]=a[i]+a[j];
			x++;
		}
	}

	for(j=0;j<p;j++)
	{
		int diff=999999;
	for(i=0;i<s;i++)
	{
		t_diff=abs(b[j]-arr[i]);
		if(t_diff < diff)
		{
			diff=t_diff;
			ans=arr[i];
		}
	}
	printf("\n%d",ans);
}
	
	return(0);
}
