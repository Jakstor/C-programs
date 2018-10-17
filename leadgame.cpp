#include<stdio.h>
#include<math.h>
int main()
{
//	freopen("input.txt","r",stdin);
	int p,p1,p2,i,n,l,a[10005],b[10004];
	scanf("%d",&n);
	p1 = 0;
	p2=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&p);
		p1=p1+p;
		scanf("%d",&p);
		p2=p2+p;
		l=abs(p1-p2);
		a[i]=l;
		if(p1>p2)
		{
			b[i]=1;
		}
		if(p2>p1)
		{
			b[i]=2;
		}
	}

	int temp=0;
	for(i=0;i<n;i++)
	{
		if(a[i]>temp)
		{
			temp=a[i];
		}
	}
	for(i=0;i<n;i++)
	{
		if(temp==a[i])
		{
			printf("%d",b[i]);
			break;
		}
	}
	printf("  %d",temp);
}
