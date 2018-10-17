#include<stdio.h>
int main()
{
	int n,k,i,j;
	int c=0;
	char a[505];
	scanf("%d %d",&n,&k);
	scanf("%s",a);
	for(i=1;i<n;i++)
	{
		for(j=i-1; j>=i-k && j>=0;j--)
		{
			if(a[i]==a[j])
			{
				c++;
				break;
			}
		}
	}
	printf("%d",c);
	
	return(0);
}
