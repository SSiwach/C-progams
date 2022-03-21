//program to find HCF of two numbers.
#include <stdio.h>
main()
{
    int x,y,i,hcf;
    printf("enter two integer:n");
    scanf("%d,%d",&x,&y);
    for(i=1; i<=x && i<=y; ++i)
    {
       if(x%i==0 && y%i==0)
       hcf=i;
    }
    printf("HCF of %d and %d is %d" , x, y, hcf);
}
