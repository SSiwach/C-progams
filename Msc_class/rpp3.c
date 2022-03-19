#include<stdio.h>
#include<math.h>
float f(float x,float y)
{
return(pow(x,3)+pow(y,3)+x*y+1);
}
main()

{


float x=0,x1,x2,y,y1,y2,yi=0.2,ym,yr,z,acc=0.00001;

printf("enter y1 min and y2 max\n");
scanf("%f,%f",&y1,&y2);


for(y=y1;y<=y2;y+=yi)
{
if(f(x,y1)*f(x,y+yi)<0)
{
y1=y;
yr=y+yi;
do
{
ym=(y1+yr)/2.0;
if(f(x,ym)*f(x,y1)>0)
{
y1=ym;
}
if(f(x,ym)*f(x,y1)<0)
{
yr=ym;
}
z=fabs((y1-yr)/(y1+yr));
printf("root=%f f(x,ym)=%f  x=%f\n",ym,x,f(x,ym),x);
}
while(z>acc);
printf("\nroot=%f f(x,ym)=%f x=%f\n\n",ym,f(x,ym),x);
}
}
}


