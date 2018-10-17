#include<stdio.h>
int f(int a[] , int p)
{
	int temp,i,x;
	int key=p;
	if(p>0)
	{
		x=f(a,p-1);
	}
	else
	{
		return(x);
	}
	for(i=key;i>0;i--)
	{
		if(a[i]<a[i-1])
		{
			temp=a[i];
			a[i]=a[i-1];
			a[i-1]=temp;
		}
		else
		{
			break;
		}
		return(x);
	}
	
}
int main()
{
	int a[100],p,i;
	scanf("%d",&p);
	for(i=0;i<p;i++)
	{
		scanf("%d",&a[i]);
	}
	f(a,p);
	for(i=0;i<p;i++)
	{
		printf("%d",a[i]);
	}
	return(0);
}
