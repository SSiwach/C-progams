#include<stdio.h>
#include<math.h>
float f(float x,float y)
{
return(pow(x,3)+pow(y,3)+x*y+1);
}
main()

{
float x,y,x1,x2,y1,y2,ym,yr,yi=0.5;
printf("enter x1 min and x2 max\n");
scanf("%f,%f",&x1,&x2);
printf("enter y1 min and y2 max\n");
scanf("%f,%f",&y1,&y2);
for(x=x1;x<=x2;x+=0.1)
{

for(y=y1;y<=y2;y+=yi)
{
yr=y+yi;

if(f(x,y1)*f(x,yr)<0)
{
do
{
ym=(y1+ym)/2.0;
if(f(x,ym)*f(x,y1)>0)
y1=ym;
if(f(x,ym)*f(x,y1)<0)
yr=ym;
printf("root=%f f(x,ym)=%f  x=%f\n",ym,x,f(x,ym),x);
}
while(fabs(y1-y2)/(y1+y2));
printf("root=%f f(x,ym)=%f  x=%f\n",ym,x,f(x,ym),x);
}
}
}
}









