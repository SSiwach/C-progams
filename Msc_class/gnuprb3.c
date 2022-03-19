#include<stdio.h>
#include <math.h>
#define pi 3.14159
main()
{
float x,y,z;
int n;
FILE *fp=NULL;
fp=fopen("gnuprb3.txt","w");
for(x=-6*pi;x<=6*pi;x+=0.01)
{
n=(int)(x/(2.0*pi));
z=fabs(x-2.0*pi*n);
if(z>=0 && z<pi)
{y=z;}
if(z>=pi && z<2*pi)
{y=2*pi-z;}
fprintf(fp,"%f \t %f\n",x,y);
}
fclose(fp);
}
