#include<stdio.h>
void myFun(){
    printf("Enter Year : ");
    int year;
    scanf("%i",&year);
    if(year%100==0){
        printf("Century Year");
    }
    else if(year%4==0){
        printf("Leap Year");
    }
    else{
        printf("Not Leap Year");
    }
}

void main(){
    myFun();
}