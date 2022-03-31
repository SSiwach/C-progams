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
float g(float A)
{
	float N,n,a;
	float OE;
	n = pow(A,-0.3333);
	OE = 41*n;
	
	return(OE);
}
float main() 
{
    float A,N,Z,E1,E2;
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
        //fprintf(fp,"Value of Oscillator strength : %f  for A : %f\n",f(A),A);
	for(N = 1;N<10;N++)
	{
		E1 = (N+1.5)*f(A);
		E2 = (N+1.5)*g(A);
	    printf("Value of N = %f and Energy = %f\n",N,E1);
	    fprintf(fp,"Value of N = %f and energy = %f\n",N,E1);
	    fprintf(fp,"Value of N = %f and energy = %f\n",N,E2);
	}
    }
    return 0;
}
