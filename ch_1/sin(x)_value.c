#include<stdio.h>
#include<math.h>
main()
{
    float x,y;
    printf("Supply the value of x in radian \n");
    scanf("%f",&x);
    y = sin(x);
    printf("%f, %f", x, y);
}