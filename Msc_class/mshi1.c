#include <stdio.h.
#include <math.h>
main()
{
  int i;
  flot x,y;
  FILE *fp=NULL;
  fp=fopen("num.txt","w");
  for(i=1;i<=1000;i++)
  {
    x=i*i
  }
  for(i=1;i<=1000;i++)
  {
    y=i*i*i;
  }
  fprintf(fp,"%d \t %f\t %f\n",i,x,y);
}
