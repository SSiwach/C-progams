#include<stdio.h>
#include<math.h>
float f(float x)
{
float a,b,c;
int n;
a=1.0;
b=2.0*x;
n=0;
do
{
c=2.0*x*b - a ;
a=b;
b=c;
n++;
}
while(n<3);
return(c);
}


main()
{
  FILE *fp=NULL;
  fp=fopen("rpn5.txt","w");


float x,x1,x2,f1,f2,x3,t;
printf("en x min and x max\n");
scanf("%f,%f",&x1,&x2);
for(x=x1;x<=x2;x+=0.1)
{
printf("\n%f\t%f\n",x,f(x));
}

for(x=x1;x<=x2;x+=0.2)
{

do
{
f1=f(x1);
f2=f(x2);
x3=((x1*f2)-(x2*f1))/(f2-f1);
t=fabs(f2);
x1=x2;
x2=x3;
}
while(t>0.00001);
printf("root=%f\tf(x2)=%f\n",x2,f2);
}
}

