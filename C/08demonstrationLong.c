#include<stdio.h>
void myFun(){
    int a;
    long b;
    long long c;
    double d;
    long double e;
    printf("Int size is %zu",sizeof(a));
    printf("\nLong size is %zu",sizeof(b));
    printf("\nLong Long size is %zu",sizeof(c));
    printf("\nDouble size is %zu",sizeof(d));
    printf("\nLong Double size is %zu",sizeof(e));
}

void main(){
    myFun();
}