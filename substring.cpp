#include<stdio.h>
#include<string.h>

using namespace std;

int main()
{
	char str[100];
	int i,j,n,k,l,p;
	scanf("%d",&p);
	int ans=0;
	for(l=0;l<p;l++)
	{
		ans=0;
		scanf("%s",str);
		scanf("%d",&k);
		n=strlen(str);
		for(i=0;i<n;i++)
		{
			int count[26]={0};
			int dist=0;
			int mcnt=0;
			for(j=i;j>=0;j--)
			{
				if(count[str[j]-'a']==0)
				{
					count[str[j]-'a']++;
					dist++;
				}
				else
				{
					count[str[j]-'a']++;
				}
				mcnt = mcnt<count[str[j]-'a']?count[str[j]-'a']:mcnt;
				if(dist>=k && mcnt*dist == (i-j+1)){
					ans++;
				}
			}
		}
		printf("%d\n",ans);
	}
	return(0);
}
