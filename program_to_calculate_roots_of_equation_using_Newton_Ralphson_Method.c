/*Program to calculate roots using Newton Ralphson Method with h/x = 0.01*/


#include<stdio.h>
#include<math.h>
#define pi 3.14159
float
f (float x, float t)
{
  return (x - 0.8*sin(x) - t);
}

float
g (float x)
{
  return (1 - 0.8*cos(x));
}

float main ()
{
  float x, h, t;
  for (t = 0; t <= 2*pi; t += 0.1)
    {
      x = t;
      do
		{
	  		h = -f(x,t) / g(x);
	  		x = x + h;
		}
      while (fabs (h/x) > 0.01);
      		printf ("f(x,t)=%f	root=%f\n",f(x,t),x);
    }
}
