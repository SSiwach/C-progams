// Online C compiler to run C program online
#include <stdio.h>
#include<math.h>
float f(float A)
{
	float n,m,a;
	float OE;
	n = pow(A,-0.3333);
	m = pow(A,-0.6666);
	OE = 45*n-25*m;
	
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
    float A,N,Z,E;
    float W;
    FILE *fp=NULL;
    fp=fopen("Oscillator_strength.txt","w");
  //  printf("Enter the value of A,N,Z\n");
//    scanf("%f,%f,%f",&A,&N,&Z);
//    printf("%f \n %f \t %f \t %f",f(A),A,N,Z);
// 	printf("%f \n %f \t %f \t %f",g(A,N,Z),A,N,Z);   
    for(A=0;A<208;A++)
    { 
        printf("Value of Oscillator strength : %f  for A : %f\n",f(A),A);
        fprintf(fp,"Value of Oscillator strength : %f  for A : %f\n",f(A),A);
	for(N = 0;N<10;N++)
	{
		E = (N+1.5)*f(A)
	}
    }
    return 0;
}
