#include <stdio.h>
 climb(int d ,int hc ,int u ,int d ,int f)
 {
 	if(d!=1 && hc<=0)
 	{
 		printf("failure on day %d",d);
	}
	
	hc= hc+u;

	if(hc>h)
	{
		printf("Success on day %d",d);
	}
	
	if(h>0)
	{
	fat=(f/100)*u;
            hc=hc-d;
            u=u-fat;
        }
	if(hc<=h && hc>=0)
	{
		if(u>f)
		{
			climb(d+1,hc-d,u-f,d,f,h);
		}
		else
		{
			climb(d+1,hc-d,0,d,f,h);
		}
	}
	
 }
int main(void) {
    float h,u,d,f,hac,has,dc;
    float fat;
    int day;
    int suc = 0;
    scanf("%f",&h);
    scanf("%f",&u);
    scanf("%f",&d);
    scanf("%f",&f);
	climb(1,0,1,1,1,1);
	return(0);
}
