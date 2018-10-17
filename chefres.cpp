#include<stdio.h>
int main()
{
	int n,m,i,j,l,r,c;
	int a[100005],b[100005];
	int p[1000];
	scanf("%d",&n);
	scanf("%d",&m);
	for(i=0;i<n;i++)
	{
		scanf("%d",&l);
		scanf("%d",&r);
		a[i]=l;
		b[i]=r;
	}
	for(i=0;i<m;i++)
	{
		scanf("%d",&p[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			if(a[j]>a[j+1])
			{
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
		for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			if(b[j]>b[j+1])
			{
				int temp=b[j];
				b[j]=b[j+1];
				b[j+1]=temp;
			}
		}
	}
		for(i=0;i<m;i++)
		{
			for(j=1;j<m-i;j++)
			{
				if(p[j]>p[j+1])
				{
					int temp=p[j];
					p[j]=p[j+1];
					p[j+1]=temp;
				}
			}
		}
	for(i=0;i<m;i++)
	{
		printf("%d",p[i]);
	}
	printf("\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(p[i]==a[j])
			{
				printf("0\n");
				break;
			}
			if(p[i]>a[j] && p[i]<b[j])
			{
				printf("0\n");
				break;
			}
			if(p[i]==b[j])
			{
				c=a[j+1]-p[i];
				printf("%d\n",c);
				break;
			}
			if(p[i]>b[j])
			{
				printf("-1\n");
				break;
			}
			if(p[i]<a[j])
			{
				int k=a[j]-p[i];
				printf("%d",k);
				break;
			}
			
		}
	}
	return(0);
}
