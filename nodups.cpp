#include<stdio.h>
int main()
{
	int i,j,k,l,n,a[100],key,temp;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				int t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		key=a[i];
		for(j=i;j<n;j++)
		{
			if(key==a[j+1])
			{
				for(k=j;k<n;k++)
				{
					temp=a[k];
					a[k]=a[k+1];
					a[k+1]=temp;
				}
				n--;
				--j;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	return(0);
}
