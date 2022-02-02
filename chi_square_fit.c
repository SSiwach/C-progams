#include<stdio.h>
#include<math.h>
#include<stdlib.h>


float f(float x)
{
	return (x-(pow(x,3)/6) +(pow(x,5)/120)-(pow(x,7)/5040)+(pow(x,9)/362880)-(pow(x,11)/39916800)+(pow(x,13)/6227020800));
}
float g(float x)
{
	return sin(x);
}

float h(float y, float z)
{
	int i;
	return (pow((y-z),2)/z);
}

float main()
{
	int i;
	
	float x,y,z,t;
	float line[180];
	float PI = 3.14159;
	t = 0;
	FILE *fp = NULL;
	fp = fopen("chi.txt","w");
	for(x=0.1;x<=1.8*PI;x+=.01*PI)
	{	
		
		z = g(x);
		y = f(x);	
		fprintf(fp,"%f\t%f\t%f\t%f\n",x,f(x),g(x),h(z,y));
		t+=h(z,y);
		
	}
	printf("%f\n",t);
	FILE *fp1 = NULL;
	fp1 = fopen("chi.txt","r");
	/*for(i=1;180;i++)
	{
		fscanf(fp1," %[^,]", line[i]);
		printf("%d",line[i]);
	}*/
	
}
