#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,i,s,j,temp;
		int c=0;
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&s);
			scanf("%d",&j);
			temp=j-s;
			if(temp>5)
			{
				c++;
			}
		}
		printf("%d",c);
		printf("\n");
	}
	return(0);
}
