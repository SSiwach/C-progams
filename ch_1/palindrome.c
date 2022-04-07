/* program to check wheter a given number is a Pallindrome Numner */
#include<stdio.h>
#include<math.h>
void main()
{
    int n, rev = 0, tem;
    printf("Enter a number to check if it is a palindrome or not \n");
    scanf("%d",&n);
    tem = n;
    while(tem != 0)
    {
        rev = rev*10;
        rev = rev + tem%10;
        tem = tem/10;
    }
    if (n == rev)
        printf("%d is a palindrome number. \n",n);
    else
        printf("%d is not a palindrome number. \n", n);
}
