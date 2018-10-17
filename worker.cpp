#include<stdio.h>
int main()
{
	int n,t,i,j,p[1005],tot;
	int min_a=100001;
	int min_t=100001;
	int min_b=100001;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&p[i]);
	}
	for(i=0;i<n;i++)
	{
		scanf("%d",&t);
		if(t==1 && min_a>p[i])
		{
			min_a=p[i];
		}
		else if(t==2 && min_t>p[i])
		{
			min_t=p[i];
		}
		else if(t==3 && min_b>p[i])
		{
			min_b=p[i];
		}
	}
	printf("%d",min_a+min_t<min_b?min_a+min_t:min_b);
	return(0);;
}
