#include<stdio.h>
int gcd(int a, int b)
{
    // Everything divides 0 
    if (a == 0 || b == 0)
       return 0;
 
    // base case
    if (a == b)
        return a;
 
    // a is greater
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}
int GCD(int a[], int n)
{
	
	
	int p,x;
	int k=n;
	if(n>0)
	{
		p=GCD(a,n-1);
		
//		printf("%d",p);
	}
	else
	{
		return a[n] ;
	}
	x=gcd(p,a[k]);
	return x;
}
int main()
{
	int t,j;
	scanf("%d",&t);
for(j=0;j<t;j++)
{
	int a[50000],n,i,ans;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	ans=GCD(a,n-1);
	if (ans==1)
	{
		printf("0\n");
	}
	if(ans!=1)
	{
		printf("-1\n");
	}
}
	return(0);
}
