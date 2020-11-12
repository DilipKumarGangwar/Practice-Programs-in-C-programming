//C program to check Whether a number is even or odd

#include<stdio.h>
int main()
{
    int n;
    //Input
    printf("Enter the number");
    scanf("%d",&n);
    //Processing
    if(n%2==0)
      printf("%d is Even number",n);
    else if(n%2 != 0)
      printf("%d is Odd Number",n);

    return 0;
}