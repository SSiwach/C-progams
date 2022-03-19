#include<stdio.h>
#include<math.h>
float f( float z, int n)
{float y;
if(n==0)
{
y=sin(z)/(z);

}
 else if(n==1)
{
y=(sin(z)/(z*z))-cos(z)/(z);

}
return y;
}
main()

{
  float f(float z, int n);
  float z;
  int n;
for(n=1;n<=5;n++)
  {
for(z=1;z<=5;z+=0.01)
{
f(z,(n+1))=((2n+1)*f(z,n)/(z))-f(z,(n-1));
printf("%f\t%f\t%f\t%f\t%f\n",f(z,1),f(z,2),f(z,3),f(z,4),f(z,5));
fprintf(fp,"%f\t%f\t%f\t%f\t%f\n",f(z,1),f(z,2),f(z,3),f(z,4),f(z,5));
}
fclose(fp);
}
}
