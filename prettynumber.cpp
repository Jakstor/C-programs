#include<stdio.h>
int main()
{
	int i,j,t,l,r;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d %d",&l,&r);
		int ct=0;
		for(j=l;j<=r;j++)
		{
			if(j%10==2)
			{
				ct++;
			}
			if(j%10==3)
			{
				ct++;
			}
			if(j%10==9)
			{
				ct++;
			}
		}
		printf("%d\n",ct);
	}
	return(0);
}
