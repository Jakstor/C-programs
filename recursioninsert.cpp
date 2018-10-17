#include<stdio.h>
ins(int a[] , int i , int n)
{
	int j,temp;
	if(i<n)
	{
		for(j=i;j>0;j--)
		{
			if(a[j] < a[j-1])
			{
				temp=a[j];
				a[j]=a[j-1];
				a[j-1]=temp;
			}
			else
			{
				break;
			}
		}
		ins(a,i+1,n);
	}
}
int main()
{
	int n,a[100],temp,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	ins(a,1,n);
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return(0);
}
