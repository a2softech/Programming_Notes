#include<stdio.h>
void myFun(){
    printf("\nEnter Dividend : ");	
    int n1=0,n2=0;
    scanf("%i",&n1);
    printf("Enter Divisor : ");
	scanf("%i",&n2);
    printf("\nQuotient is : %i",n1/n2);
    int rem=n1%n2;
    printf("\nRemainder is : %i",rem);
}


void main(){
    myFun();
}