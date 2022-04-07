/*program to Make a table of the trigonometric functions sin x; cos x , and tan x*/
#include <stdio.h>
#include<math.h>
int
main ()
{
  float pi = 3.14;
  float x;
  for (x = 0; x <= 0.25; x += 0.01)
    {
      printf ("%6.2f %6.2f %6.2f \n", sin (x * pi), cos (x * pi),
	      tan (x * pi));
    }
}
