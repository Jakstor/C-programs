#include <stdio.h>
 
int main(void) {
    float h,u,d,f,hac,has,dc;
    float fat;
    int day;
    int suc = 0;
    scanf("%f",&h);
    scanf("%f",&u);
    scanf("%f",&d);
    scanf("%f",&f);
   float hc=0;
    if(h>0)
    {
        fat=(f/100)*u;
        for(day=1;;)
        {
        	if(hc<=0 && day!=1){
        		break;
			}
            hc=hc+u;
            if(hc>h){
            	break;
			}
            hc=hc-d;
            u=u-fat;
            if(u<=0){
            	u=0;
			}
			if(hc<=h && hc>=0){
				day++;
			}
        }
	}
    if(hc>h){
		printf("Success - %d",day);
	}else{
		printf("Fail - %d",day);
	}
    return 0;
}
