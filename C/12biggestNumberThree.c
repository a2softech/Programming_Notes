#include<stdio.h>
void myFun(){
    int a,b,c;
    printf("Enter First Number : ");
    scanf("%i",&a);
    printf("Enter Second Number : ");
    scanf("%i",&b);
    printf("Enter Third Number : ");
    scanf("%i",&c);
    if(a>b){
        if(a>c){
            printf("%i is Biggest Number ",a);
        }
    }
    else if(b>c){
        if(b>a){
            printf("%i is Biggest Number ",b);
        }
    }
    else{
        printf("%i is Biggest Number ",c);
    }
}

void main(){
    myFun();
}