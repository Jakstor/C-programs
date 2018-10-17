#include<stdio.h>
int main()
{
	//freopen("input.txt","r",stdin);
	int i,n,m,d,a[100];
	char q;
	int j=0;
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<m;i++)
	{
		
		//printf("i1- %d\n",i);
		
		scanf(" %c",&q);
		//printf("i2- %d\n",i);
		scanf("%d",&d);
		
		//printf("i3- %d\n",i);
		if(q=='C')
		{
			j=(j+d)%n;
		}
		else if(q=='R')
		{
			printf("%d\n",a[(j+(d-1))%n]);
		}
		else if(q=='A')
		{
			j=(j-d+n)%n;
		}
	}
	return(0);
}
