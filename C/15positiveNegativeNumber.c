#include<stdio.h>
void myFun(){
    printf("Enter Number : ");
    int num;
    scanf("%i",&num);
    if(num>0){
        printf("Possitive Number ");
    }
    else if(num<0){
        printf("Negative Number ");
    }
    else{
        printf("It's Number is Zero");
    }
}

void main(){
    myFun();
}