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
  float x;
  FILE *fp=NULL;
  fp=fopen("rpn5.txt","w");
  for(x=-1;x<=1.1;x+=0.1)
    { 
      printf("%f\t%f\n",x,f(x));
      fprintf(fp,"%f\t%f\n",x,f(x));
    }
}
