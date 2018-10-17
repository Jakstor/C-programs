#include<stdio.h>
int main()
{
	int i,n,b,d;
	int c=0;
	printf("Enter the number you wannt to check palindrome or not: ");
	scanf("%d",&n);
	i=n;
	while(n!=0)
	{
		b=n%10;
		d=c+b;
		c=d*10;
		n=n/10;
	}
	if(d==i)
	{
		printf("Palindrome");
	}
	else
	{
		printf("Not Palindrome");
	}
	return(0);
}
