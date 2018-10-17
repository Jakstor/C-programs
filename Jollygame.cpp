#include<stdio.h>
#include<math.h>
int main()
{
	int i,a[100],b[100],j,n,temp;
	int flag=0;
	int ans=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		b[i]=abs(a[i]-a[i+1]);
	}

	for(i = 0 ;i <n-1;i++)
	{
		printf("%d ",b[i]);
	}
	printf("\n");
	
//	n=n-1;
	
	for(i=0;i<n-1;i++)
	{
		for(j=1;j<n-i-1;j++)
		{
			if(b[j-1]>b[j])
			{
//				printf("%d ",b[j-1]);
//				printf("%d ",b[j]);
//				printf("\n");
				temp=b[j];
				b[j]=b[j-1];
				b[j-1]=temp;
			}
		}
	}
	
	for(i = 0 ;i <n-1;i++)
	{
		printf("%d ",b[i]);
	}
	printf("\n");
	
	
	if(b[0]==1)
	{
		for(i=0;i<n-1-1;i++)
		{
			if(abs(b[i]-b[i+1])!=1)
			{
				flag=1;
			}
		}
	}
	else
	{
		ans = 1;
		printf("Not Jolly");
	}
	
	if(flag==1 && ans == 0)
	{
		printf("Not Jolly");
	}
	else if(ans == 0)
	{
		printf("Jolly");
	}
	return(0);
}
