#include<stdio.h>
#include<math.h>
float f(float x)
{
    return(exp(x)-5.0*x*x);
}
int main()
{
    float x,xm,xl,xr,a,b,xi=0.5,x1,x2,ac=0.00001,z;
    int n,i;
    float f(float x);
    printf("enter x min\n");
    scanf("%f",&a);
    printf("enter x max\n");
    scanf("%f",&b);
    for(x=a;x<=b;x=x+0.1)
        {
            printf("%f\t%f\n",x,f(x));
            
        }
            printf("input no of root");
            scanf("%d",&n);
                for(i=1;i<=n;i+=1)
                    {
                        printf("x1 x2\n");
                        scanf("%f,%f",&x1,&x2);
                        for(x=x1;x<=x2;x+=xi)
                        {
                            if(f(x)*f(x+xi)<0)
                            {
                                xl=x;
                                xr=x+xi;
                                do
                                {
                                    xm=(xl+xr)/2.0;
                                    if(f(xm)*f(xl)>0)
                                    {
                                        xl+xm;
                                        
                                    }
                                 if(f(xm)*f(xl)<0)
                                    {
                                        xr=xm;
                                        
                                    }
                                 z=fabs((xl-xr)/(xl+xr));
                                 printf("xm=%f f(xm)=%f z=%f a=%f\n\n",xm,f(xm),z,ac);
                                }
                                    while(z>ac);
                                    printf("\nroot=%f f(xm)=%f z=%f acc=%f\n\n",xm,f(xm),z,ac);
                            }
                        }
                    }
}
