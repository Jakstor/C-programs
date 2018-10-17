#include<stdio.h>
int main()
{
	int t,j;
	scanf("%d",&t);
	for(j=0;j<t;j++)
	{
		long long i,a,b,l,m,x;
		scanf("%lld",&a);
		scanf("%lld",&b);
		
		if(a==b){
			printf("0\n");
			continue;
		}else if(b==0){
			printf("-1\n");
			continue;
		}else if(b==1){
			if(a==0){
				printf("1\n");
				continue;
			}else{
				printf("-1\n");
				continue;
			}
		}
		int ac=0;
		for(i=a;i!=0;i=i/2)
		{
			l=i%2;
			if(l==1)
			{
				ac++;
			}
		}
		//printf("%d\n",ac);
		int bc=0;
		for(i=b-1;i!=0;i=i/2)
		{
			m=i%2;
			if(m==1)
			{
				bc++;
			}
		}
		//printf("%d\n",bc);
		if(ac==bc)
		{
		printf("1\n");	
		}
		else if(ac<bc)
		{
			x=bc-ac+1;
			printf("%lld\n",x);
		}
		else
		{
			printf("2\n");
		}
	}
	return(0);
}
