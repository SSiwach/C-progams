//program to find the root of an equation by using Newton Ralphson method.
#include<stdio.h>
#include<math.h>
float f(float x)
{
	int n;
	float a,b,c;
		a=2*x;
		b=1;
		for(n=1;n<=3;n++)
		{	
	        c=(2*x*a-b);
			b=a;	
			a=c;
		}
		return(c);
}

int main()
{
	float x,a,b,c,x1,x2,x3,dx=0.1,acc=0.00001,f1,f2,t;
		for(x=-1.0;x<=1.0;x+=0.1)
		{
			x1=x;
			x2=x+dx;

			if(f(x1)*f(x2)<0)
			{
			do
				{
					f1=f(x1);
					f2=f(x2);
					x3=(x1*f2-f1*x2)/(f2-f1);
					x1=x2;	
					x2=x3;
					t=fabs(f2);
				} 
		while(t>acc);
					printf("root=%f\t%f\n",x2,f2);
			}
		}
}
