#include<stdio.h>
#include<math.h>
float f(float x)
{
  return (sin(x)-x*cos(x));
}
main()
{
    float x,a,b,xi=0.5,xr,xl,xm,acc=0.00001,z,x1,x2;
    int n,i;
    float f(float x);
    printf("enter x min and x max\n");
    scanf("%f,%f",&a,&b);
    for(x=a;x<=b;x+=0.1)
  {
     printf("%f\t%f\n",x,f(x));
  }
  printf("enter no of root n\n");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    printf("en x1 and x2\n");
    scanf("%f,%f",&x1,&x2);
    for(x=x1;x<=x2;x+=xi)
      {
          if(f(x)*f(x+xi)<0)
          {
                xl=x;
                xr=x+xi;
                do
                {
                    xm=xr+a/2.0;
                    if(f(xm)*f(xl)>0)
                    {
                      xr=xm;
                    }
                    if(f(xm)*f(xl)<0)
                    {
                      xl=xm;
                    }
                    z=fabs((xl-xr)/(xl+xr));
                }
                while(z>acc);
                printf("\nroot=%f  f(xm)=%f  %f\n",xm,f(xm),acc);
          }
      }
  }
}

