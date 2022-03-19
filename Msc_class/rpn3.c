#include<stdio.h>
#include<math.h>
float f(float x,float y)
{
return(pow(x,3)+pow(y,3)+x*y+1);
}
float g(float x,float y)
{
return(3*y*y+x);
}
main()
{
FILE *fp=NULL;
fp=fopen("rpn3.txt","w");
float x=0,y,h,z;
for(x=-1.5;x<=1.6;x+=0.1)
{
for(y=-2.0;y<=2.0;y+=1.85)
{
z=y;
do
{
h=-f(x,z)/g(x,z);
z=z+h;
}
while(fabs(h/z)>0.000001);
printf("root=%f x=%f f(x,z)=%f\n",z,x,f(x,z));
fprintf(fp,"%f\t%f\t%f\n",z,x,f(x,z));
}
}
}
