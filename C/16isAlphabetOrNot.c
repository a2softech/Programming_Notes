#include<stdio.h>
void myFun(){
    printf("Enter Alphabet : ");
    char ch;
    scanf("%c",&ch);
    if(ch>64&&ch<91||ch>96&&ch<124){
        printf("It's Alphabet ");
    }
    
    else{
        printf("It's Not Alphabet ");
    }
}

void main(){
    myFun();
}