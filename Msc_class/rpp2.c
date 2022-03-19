#include<stdio.h>
#include<math.h>
float f(float x)
{
float t,s,acc=0.0001;
int k;
t=1;
s=1;
k=1;
do
{
t*=-(x*x)/(4*k*k);
s+=t;
}
while(fabs(t/s)>acc);
return s;
}
main()
{
float x,xm,xl,xr,a,b,xi=0.5,x1,x2,ac=0.00001,z;
int n,i;
float f(float x);
printf("enter x min\n");
scanf("%f",&a);
printf("enter x max\n");
scanf("%f",&b);
for(x=a;x<=b;x=x+0.1)
{printf("%f\t%f\n",x,f(x));}
printf("input no of root");
scanf("%d",&n);
for(i=1;i<=n;i+=1)
{
printf("x1 x2\n");
scanf("%f,%f",&x1,&x2);
for(x=x1;x<=x2;x+=xi)
{
if(f(x)*f(x+xi)<0)
{
x1=x;
xr=x+xi;
do
{
xm=(x1+xr)/2.0;
if(f(xm)*f(x1)>0)
{x1+xm;}
if(f(xm)*f(x1)<0)
{xr=xm;}
z=fabs((x1-xr)/(xl+xr));
printf("xm=%f f(xm)=%f z=%f a=%f\n\n",xm,f(xm),z,ac);
}
while(z>ac);
printf("\nroot=%f f(xm)=%f z=%f acc=%f\n\n",xm,f(xm),z,ac);
}
}
}
}
