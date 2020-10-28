#include<stdio.h>

//C program to calculate Simple Interest
int main(){
     float principal,rate,time,si;
     //Take the Input
     printf("Enter the principal,rate,time\n");
     scanf("%f%f%f",&principal,&rate,&time);

    //Do Processing
     si = (principal*rate*time)/100;
     
    //Print output or SI
    printf("Simple interest=%.2f",si);
    return 0;
}