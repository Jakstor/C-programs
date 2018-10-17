#include<stdio.h>
void f(int a[],int p)
{
	int i,temp;
	int key=p;
	if(p>0)
	{
		f(a,p-1);
	}
	else
	{
		return ;
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
	}
	return ;
}
int main()
{
	int a[100],ans,n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	f(a,n);
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	return(0);
}
