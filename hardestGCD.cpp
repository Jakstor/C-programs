#include<iostream>
#include<math.h>

using namespace std;

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
 
int findGCD(int arr[], int n)
{
    int result = arr[0];
    for (int i = 1; i < n; i++)
        result = gcd(arr[i], result);
 
    return result;
}

bool check(int GCD,int k)
{
	int i,j;
	int max_prime=1;
	for(j=2;j<=sqrt(GCD);j++)
	{
		while(GCD%j == 0)
		{
			GCD=GCD/j;
			max_prime=max(max_prime,j);
		}
	}
	max_prime=max(max_prime,GCD);
	if(max_prime<=k)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	int t,n,k,i,ans;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d %d",&n,&k);
		int j,a[100005];
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[j]);
		}
		int GCD=findGCD(a, n);
		ans=check(GCD,k);
		if(ans==true)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
	return(0);
}
