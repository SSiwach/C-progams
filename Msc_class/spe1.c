#include<stdio.h>
#include<math.h>
main()
{
  float x,s,t;
  int n,i;
  printf("enter x and n\n");
  scanf("%f,%d",&x,&n);
  t=1.0;
  s=1.0;
  for(i=1;i<=n;i++)
   {
      t*=(x/i);
      s+=t;
      printf("%f\t%f\n",t,s);
   }
    printf("%f\t%f\n",t,s);
}

