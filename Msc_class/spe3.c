#include<stdio.h>
#include<math.h>
#define pi 3.14159
main()
{
float x,t,s;
int i,n;
FILE *fp=NULL;
fp=fopen("spe3.txt","w");
printf("enter x and n\n");
scanf("%f,%d",&x,&n);
x=pi/x;
s=x;t=x;
for(i=1;i<=n;i++)
{
t*=-x*x/((2*i+1)*2*i);
s+=t;
printf("%d\t %f\t %f\t %f\n",n,t,s,sin(x));
fprintf(fp,"%d%f\t%f\t%f\n",n,t,s,sin(x));
}
fclose(fp);
}
