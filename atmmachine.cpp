#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,k,a,j;
		scanf("%d",&n);
		scanf("%d",&k);
		for(j=0;j<n;j++)
		{	scanf("%d",&a);
			if(a<=k)
			{
				printf("1");
				k=k-a;
			}
			else
			{
				printf("0");
			}
		}
	}
	return 0;
}

