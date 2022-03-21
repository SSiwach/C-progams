#include<stdio.h>
#include<math.h>
float f(float x,float n)
{
    float y,z=1.0;
    int i;
    for (i=1;i<=n;i++)
      z*=x;
      if(x<=0.0)
      {
         y = z-1+exp(x);
      }
      else
      {
         y=z-log(1+x);
      }
return(y);
}
main()
{
  float x,n;
  printf("enter the value of x,(float),n(int)\n");
  scanf("%f , %f" , &x, &n);
  printf("x=%6.2f n=%6.2f f=%6.2f\n" ,x , n,f(x,n));
}
