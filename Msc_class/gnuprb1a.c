#include<stdio.h>
#include<math.h>
main()
{
float i,j;
FILE *fp=NULL;
fp=fopen("gnuprb1a.txt","w");
j=0.0;
for(i=0;i<=4;i+=0.1)
{
printf("%f \t%f \n",i,j);
 fprintf(fp,"%f \t %f\n",i,j);
}
i=4.0;
for(j=0;j<=3;j+=0.1)
{
  printf("%f \t %f\n",i,j);
 fprintf(fp,"%f \t %f\n",i,j);
}
for(i=0;i<=4;i+=0.1)
{j=((3/4)*i);
  printf("%f \t %f\n",i,j);
  fprintf(fp,"%f \t %f\n",i,j);
}
fclose(fp);
}
