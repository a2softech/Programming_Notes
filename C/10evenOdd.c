#include<stdio.h>
void myFun(){
    int n1;
    printf("Enter Number : ");
    scanf("%i",&n1);
    if(n1%2==0){
        printf("It's Even Number");
    }
    else{
        printf("It's Odd Number");
    }
}

void main(){
    myFun();
}