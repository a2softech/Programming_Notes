#include<stdio.h>
void myFun(){
    printf("Enter End Of Natural Number : ");
    int num,sum=0;
    scanf("%i",&num);
    for(int i=1;i<=num;i++){
        sum+=i;
    }
    printf("Sum of Natural Number Is %i",sum);
}

void main(){
    myFun();
}