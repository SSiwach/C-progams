#include<stdio.h>
#include<math.h>
float f(float x)
{
  return(sin(x)-x*cos(x));
}
float g(float x)
{
  return(x*sin(x));
}
main()
{ 
  float a,x,f1,f2,h,acc=0.00001;
  float f(float x);
  float g(float x);
  FILE *fp=NULL;
  fp=fopen("rp3.txt","w");
  for(x=0;x<=10;x+=0.1)
  {
    x=5;
    do
    {
      f1=f(x);
      f2=g(x);
      h=-f1/f2;
      x=x+h;
    }
    while(fabs(h/x)>acc);
    printf("%f\t%f\n",x,f1);
  }
}
