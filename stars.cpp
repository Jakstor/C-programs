#include<stdio.h>
int main()
{
	int i,j,k,n;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			printf(" ");
		}
		for(k=n-i;k<n;k++)
		{
			printf("*");
		}
		printf("\n");
	}
}
