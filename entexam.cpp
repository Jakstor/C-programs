#include<stdio.h>
int main()
{
	int t,n,k,e,m,i,j,l,temp,temp1,temp2,a[100],t_m[100],t_m_ts,m_ts;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d %d %d %d",&n,&k,&e,&m);
		for(j=0;j<n-1;j++)
		{
			int sum=0;
			for(l=0;l<e;l++)
			{
				scanf("%d",&temp);
				sum=sum+temp;
			}
			t_m[j]=sum;
		}
		int sum1=0;
		for(j=0;j<e-1;j++)
		{
			scanf("%d",&temp1);
			sum1=sum1+temp1;
		}
		for(j=0;j<n-1;j++)
		{
			for(l=1;l<n-j-1;l++)
			{
				if(t_m[l-1] > t_m[l])
				{
					temp2=t_m[l];
					t_m[l]=t_m[l-1];
					t_m[l-1]=temp2;
				}
			}
		}
		t_m_ts=t_m[n-k-1]+1;
		m_ts=t_m_ts-sum1;
		printf("\n %d",m_ts);
	}
}
