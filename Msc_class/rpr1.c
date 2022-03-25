#include<stdio.h>
#include<math.h>
float f(float x)
{
  return(sin(x)-x*cos(x));
}
main()
{
    float x,a,b,x1,x2,xi=0.5,xr,xl,xm,z,acc=0.00001;
    int n,i;
    float f(float x);
    printf("enter x min and x max\n");
    scanf("%f,%f",&a,&b);
    for(x=a;x<=b;x+=0.1)
    {
      printf("%f\t%f\n",x,f(x));
    }
    printf("input no of root n\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("\ninput x1,x2");
        scanf("%f,%f",&x1,&x2);
        for(x=x1;x<=x2;x+=xi)
        {
          if(f(x)*f(x+xi)<0)
          {
            x1=x;
            xr=x+xi;
            do
            {
              xm=(x1+xr)/2.0;
              if(f(xm)*f(x1)>0)
              {
                x1=xm;
              }
              if(f(xm)*f(x1)<0)
              {
                xr=xm;
              }
              z=fabs((x1-xr)/(x1+xr));
              printf("xm=%f f(xm)=%f z=%f a=%f\n",xm,f(xm),z,acc);
            }
            while(z>acc);
            printf("\nroot=%f f(xm)=%f a=%f\n\n",xm,f(xm),z,acc);
          }


        }

    }


}

