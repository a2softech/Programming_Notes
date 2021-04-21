#include<stdio.h>
void myFun(){
    int a;
    float b;
    double d;
    char c;
    printf("Int size is %zu",sizeof(a));
    printf("\nFloat size is %zu",sizeof(b));
    printf("\nChar size is %zu",sizeof(c));
    printf("\nDouble size is %zu",sizeof(d));
}


void main(){
    myFun();
}