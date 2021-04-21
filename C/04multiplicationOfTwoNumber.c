#include<stdio.h>
void myFun(){
    printf("** Enter Two Number **");
    printf("\nEnter First Number : ");	
    float n1,n2;
    scanf("%f",&n1);
    printf("Enter Secound Number : ");
	scanf("%f",&n2);
    printf("Multiplication is : %f",n1*n2);
}


void main(){
    myFun();
}