#include<stdio.h>
int main()
{
	int n,i,j,temp;
	printf("Enter the n: ");
	scanf("%d",&n);
	int a[100];
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
				temp=a[j+1];
				a[j+1]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
		printf("\n");
		
	}
	return(0);
}
