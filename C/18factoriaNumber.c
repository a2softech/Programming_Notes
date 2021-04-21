#include<stdio.h>
void myFun(){
    printf("Enter Number those find Factorial : ");
    int num,sum=1;
    scanf("%i",&num);
    for(int i=1;i<=num;i++){
        sum*=i;
    }
    printf("Sum of Natural Number Is %i",sum);
}

void main(){
    myFun();
}