#include<stdio.h>
void myFun(){
    printf("** Enter Any One Value **\n");
    char ch;
    scanf("%c",&ch);
    printf("%c ASCII Value is : %d",ch,ch);
}


void main(){
    myFun();
}