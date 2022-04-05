/* program to find the value of a fuction f(x,y) between -1 and 1 */
#include<stdio.h>
#include<math.h>
float
f (float x, float y)
{
  float z;
  if (fabs (x) > fabs (y))
    {
      z = pow (x, 2.0) + pow (y, 4.0);
    }
  else if (fabs (x) == fabs (y))
    {
      z = pow (x, 2.0) + pow (x, 4.0);
    }
  else if (fabs (x) < fabs (y))
    {
      z = pow (y, 2.0) + pow (x, 4.0);
    }
  return (z);
}

float main ()
{
  float x, y, i = 0.25;
  for (x = -1; x <= 1; x += i)
    {
      for (y = -1; y <= 1; y += i)
	printf ("x=%f y=%f f(x,y)= %f\n", x, y, f (x, y));
    }
}
