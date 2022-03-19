#include<stdio.h>
#include<math.h>
#define pi 3.14159
main()
{
float d,a,n,x,y,p;
FILE *fp=NULL;
fp=fopen("gnuprb2.txt","w");
printf("enter d,a,n\n");
scanf("%f,%f,%f",&d,&a,&n);
d=d*pi;
for(p=0;p<=2*pi;p+=0.01*pi)
{
x=sin(p);
y=a*sin(n*p+d);
printf("%f\t%f\n",x,y);
fprintf(fp,"%f\t%f\n",x,y);
}
fclose(fp);
}
