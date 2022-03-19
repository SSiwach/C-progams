#include<stdio.h>
#include<math.h>
# define pi 3.14159
float f(float x,float t)
{
return(x-0.8*sin(x)-t);
}
float g(float x)
{
return(1-0.8*cos(x));
}
main()
{
FILE *fp=NULL;
fp=fopen("rpn4.txt","w");
float x=1,t,h,r,p,y,q;
for(t=0;t<=2*pi;t+=0.1)
{
do
{
h=f(x,t)/g(x);
x=x-h;
}
while(fabs(h/x)>0.000001);


r=2.0*(1-0.8*cos(x));
p=acos((cos(x)-0.8)/(1.0-0.8*cos(x)));
q=r*cos(p);
y=r*sin(p);
printf("t=%f  x=%f  q=%f  y=%f\n",t,x,q,y);
fprintf(fp,"%f\t%f\n",q,y);
}
}

