#include<stdio.h>
#include<math.h>
main()
{
float t,s,z,a=0.01;
int n;
FILE *fp=NULL;
fp=fopen("sp6.txt","w");
for(z=-10;z<=1;z+=0.05)
{
t=1;s=1;n=1;
do
{
  t*=(z*z*z)/((3*n)*(3*n-1));
s+=t;
n++;
 }while(fabs(t/s)>a);
 printf("%f\t%f\n",z,s*0.33503);
fprintf(fp,"%f\t%f\n",z,s*0.35503);
 }
}
