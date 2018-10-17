#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,m,x,y;
		scanf("%d %d %d %d",&n,&m,&x,&y);
		int a,b;
		a=(n-1)%x;
		b=(m-1)%y;
		if(a==b &&(a==0 || a==1))
		{
			printf("Chefirnemo \n");
		}
		else
		{
			printf("Pofik \n");
		}
	}
	return(0);
}
