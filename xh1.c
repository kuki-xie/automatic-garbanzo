#include<stdio.h>
#define pi 3.1415926
float s(float r)
{
    float num=r*r*pi;
    return num;
}
int main(void)
{
    float r,hc,hl,vc,vl;
    scanf("%f %f %f",&r,&hc,&hl);
    float mianji=s(r);
    vc=1.0/3*mianji*hc;
    vl=1.0*mianji*hl;
    printf("%.3f %.3f",vc,vl);
    return 0;
}