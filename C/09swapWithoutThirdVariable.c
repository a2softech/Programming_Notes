#include<stdio.h>
void myFun(){
    int n1,n2;
    printf("Enter First Number : ");
    scanf("%i",&n1);
    printf("Enter Second Number : ");
    scanf("%i",&n2);
    n1=n1+n2;
    n2=n1-n2;
    n1=n1-n2;
    printf("First No is : %i \nSecond No is : %i",n1,n2);
}

void main(){
    myFun();
}