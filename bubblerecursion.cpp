#include<stdio.h>

bubble(int a[] , int i ,int n)
{
	if(i<n)
	{
		int j;
		for(j=1;j<n-i;j++)
		{
			if(a[j-1]>a[j])
			{
				int temp=a[j];
				a[j]=a[j-1];
				a[j-1]=temp;
			}
		}
		bubble(a,i+1,n);
	}
}

int main()
{
	int n,i,j;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	bubble(a,0,n);

	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return(0);
}
