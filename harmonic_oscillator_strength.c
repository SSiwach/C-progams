// Online C compiler to run C program online
#include <stdio.h>
#include<math.h>
float f(float A, float N, float Z)
{
	float n,a;
	float OE;
	n = pow(A,-0.3333);
	a = (1+((N-Z)/(3*A)));
	OE = 41*n*a;
	
	return(OE);
}
float g(float A, float N, float Z)
{
	float n,a;
	float OE;
	n = pow(A,-0.3333);
	a = (1-((N-Z)/(3*A)));
	OE = 41*n*a;
	
	return(OE);
}
float main() 
{
    float A,N,Z;
    float W;
    printf("Enter the value of A,N,Z\n");
    scanf("%f,%f,%f",&A,&N,&Z);
    printf("%f \n %f \t %f \t %f",f(A,N,Z),A,N,Z);
 	printf("%f \n %f \t %f \t %f",g(A,N,Z),A,N,Z);   
    return 0;
}
