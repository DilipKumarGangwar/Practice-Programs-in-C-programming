//C program to check Whether a number is even or odd 
//using Bitwise Operators (&,|,^)
#include<stdio.h>
int main()
{
    //Input
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    //Processing  , Output
    if((n&1)==0)
      printf("%d is Even no",n);
    else 
      printf("%d is Odd no",n);  
    if((n|1)==(n+1))
      printf("%d is Even no",n);
    else 
      printf("%d is Odd no",n);  
    if((n^1)==(n+1))
      printf("%d is Even no",n);
    else 
      printf("%d is Odd no",n);  
    return 0;
}