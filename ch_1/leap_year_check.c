/* program to check wheter a given year is a leap year or not */
#include<stdio.h>
#include<math.h>
void
main ()
{
  int yr;
  printf ("Enter the year to check whether it is leap year or not : \n");
  scanf ("%d", &yr);
  if (yr % 400 == 0)
    printf ("The %d is a leap year \n", yr);
  else if (yr % 100 == 0)
    printf ("The %d is a leap year \n", yr);
  else if (yr % 4 == 0)
    printf ("The %d is a leap year \n", yr);
  else
    printf ("The %d is not a leap year \n", yr);

}
