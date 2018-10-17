#include <stdio.h>

int main(void) {
	freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	int n,b,h,w,p,poss,stay,v_temp,i,j;
	scanf("%d %d %d %d",&n,&b,&h,&w);
	int av[w];
	int v=b;
	for(i=0;i<h;i++)
	{
		poss=1;
		stay=0;
		scanf("%d",&p);
		for(j=0;j<w;j++)
		{
			scanf("%d",&av[j]);
		}
		for(j=0;j<w;j++)
		{
			if(av[j]<n)
			{
				poss=0;
				break;
			}
			else if(poss==1)
			{
				v_temp=p*n;
				if(v_temp<v)
				{
//					printf("v- %d ",v_temp);
					v=v_temp;
					stay=1;
				}
			}
		}
	}
	if(stay==1)
	{
		printf("%d",v);
	}
	else
	{
		printf("Stay Home");
	}
	return 0;
}

