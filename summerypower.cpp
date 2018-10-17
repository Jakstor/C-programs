#include<stdio.h>
int main()
{
	int t,i,j,n,k;
	scanf("%d",&t);
	while(t--){
		char str[100005];
		scanf("%d %d",&n,&k);
		scanf("%s",str);
		int ct=0;
		for(i=0;i<n-k;i++)
		{
			for(j=i;j<i+k;j++)
			{
				if(str[j]!=str[j+1])
				{
					ct++;
				}
			}
		}
		printf("%d\n",ct);	
	}
	return(0);
}
