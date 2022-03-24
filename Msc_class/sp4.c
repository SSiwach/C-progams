#include<stdio.h>
#include<math.h>
#define pi 3.14159
main()
{
  float a=0.001,z,t,s;
  int n;
  FILE *fp=NULL;
  fp=fopen("sp4.txt","w");
  for(z=0;z<=1.0;z+=0.1)
   {
       t=(cos(pi*z*z/2)*z);
       s=t;
       n=1;
      do
       {
          t*=-(pi*pi*z*z*z*z/((4*n)+1));
          s+=t;
          n++;
 
        }
      while(fabs(t/s)>a);
        printf("%f\t%f\t%f\n",z,t,s);
        fprintf(fp,"%f\t%f\t%f\n",z,t,s);
  }
}
