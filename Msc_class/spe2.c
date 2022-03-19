#include<stdio.h>
#include<math.h>
main()
{
float x,t,s;
int i,n;
 printf("enter x and n\n");
 scanf("%f,%d",&x,&n); 
do
{ 
 t=1.0;s=1;
 for(i=2;i<=n;i++)
   {t*=(x/(i-1));s+=t;}
 printf("%f\t%f\t%d\n",s,t,n);
 }
 while (n>0);
 
}
