#include<stdio.h>
void myFun(){
    printf("Enter Table Number : ");
    int num;
    scanf("%i",&num);
    for(int i=1;i<=10;i++){
        printf("\n%i * %i = %i",num,i,num*i);
    }
}

void main(){
    myFun();
}