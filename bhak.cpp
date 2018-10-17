#include<stdio.h>
int main()
{
	int i,j,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
			if(i%2==0 && j%2==0 || i%2!=0 && j%2!=0)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	return(0);
}
