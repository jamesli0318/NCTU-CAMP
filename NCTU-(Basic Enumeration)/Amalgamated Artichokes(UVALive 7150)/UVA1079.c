#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int p,a,b,c,d,n;

double price(int k)
{
    return p*(sin(a*k+b)+cos(c*k+d)+2);
}

int main()
{
    while(scanf("%d %d %d %d %d %d",&p,&a,&b,&c,&d,&n)!=EOF) {
        double max=0,decline=0;
        int i;
        for(i=1; i<=n; i++) {
            if(price(i)>max) {
                max=price(i);
            } else {
                double temp=max-price(i);
                if(temp>decline)
                    decline=temp;
            }
        }
        printf("%f\n",decline);
    }
    return 0;
}