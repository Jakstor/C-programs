#include<stdio.h>
#include<math.h>
int main()
{
	int i,num,j,t,x,n,bin[100],a[100];
	scanf("%d",&t);
	scanf("%d",&n);
	for(j=0;j<n;j++)
	{
		scanf("%d",&a[j]);
	}
	int temp=pow(2,n);
	int diff=n;
	int ansarray;
	for(x=1;x<temp;x++)
	{
		int sum=0;
		for(i=0;i<n;i++)
		{
			bin[i]=0;
		}
		num=x;
		for(i=n-1;i>=0 && num>0;i--)
		{
			bin[i]=num%2;
			num=num/2;
		}
		
		for(i=0;i<n;i++)
		{
			if(bin[i]==1)
			{
				sum = sum+a[i];
			}
		}
		if(diff>(n-sum) && sum<=t){
			diff= n- sum;
			ansarray = x;
		}
	}
	x = ansarray;
	{
		int sum=0;
		for(i=0;i<n;i++)
		{
			bin[i]=0;
		}
		num=x;
		for(i=n-1;i>=0 && num>0;i--)
		{
			bin[i]=num%2;
			num=num/2;
		}
		
		for(i=0;i<n;i++)
		{
			if(bin[i]==1)
			{
				printf("%d ",a[i]);
			}
		}
		printf(" sum: %d\n",n-diff);
	}
	return(0);
}
