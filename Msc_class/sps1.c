#include<stdio.h>
#include<math.h>
float f(float x)
{
  return(exp(x)-5.0*x*x);
}
main()
{
    float x,a,b,f1,f2,t,acc=0.00001,x1,x2,x3;
    int n,i;
    float f(float x);
    printf("en x min and x max\n");
    scanf("%f,%f",&a,&b);
    for(x=a;x<=b;x+=0.1)
    {
        printf("\n%f\t%f\n",x,f(x));
    }
    printf("en no of root n\n");
    scanf("%f",&n);
    for(i=1;i<=n;i++)
   {
        printf("enter x1 and x2\n");
        scanf("%f,%f",&x1,&x2);
    do
      {
         f1=f(x1);
         f2=f(x2);
         x3=((x1*f2)-(x2*f1))/(f2-f1);
         t=fabs(f2);
         x1=x2;
         x2=x3;
      }
    while(t>acc);
    printf("%f\t%f\t%f\n",x2,f2,acc);
   }
}
