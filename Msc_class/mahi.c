//program to print value of x*x and x*x*x into a file using fp command
#include<stdio.h>
#include<math.h>
main()
{
  int i;
  float x,y;

  FILE *fp=NULL;
  fp=fopen("mahi.txt","w");
  for(i=1;i<100;i++)
    {
      x=i*i;
      y= i*i*i;
      fprintf(fp,"%d\t%f\t%f\n",i,x,y);
    }
    fclose(fp);
}
