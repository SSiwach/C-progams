/*program to find out prime numbers upto a certain number*/
#include <stdio.h>
#include<math.h>
int
main ()
{
  int n, m, i, j, k, flag, np;
  float x, xi;
  printf ("input an integer greater than 3: \n");
  scanf ("%d", &n);
  np = 0;
  for (i = 3; i <= n; i += 2)
    {
      xi = i;
      m = sqrt (xi);
      j = 3;
      flag = 0;
      while (j <= m && flag == 0)
	{
	  x = xi / ((float) (j));
	  k = i / j;
	  if (x == k)
	  flag = 1;
	  j += 2;
	}
      if (flag == 0)
	{
	  printf ("%d ", i);
	  np += 1;

	}
    }
  printf ("\nThe number of primers upto %d is %d", n, np);

}
