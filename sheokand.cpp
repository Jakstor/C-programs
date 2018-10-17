#include<stdio.h>
int main()
{
	int i,j,n,x,y;
	scanf("%d",&n);
	i=2;
	x=0;
	y=0;
	while(i<=n)
	{
		x++;
		i=i*2;
		if(i>n)
		{
			i=i/2;
			break;
		}
	}
	for(j=2;j<=n-i;j=j*2)
	{
		y++;
	}
	printf("x= %d , y= %d",x,y);
	return(0);
}
