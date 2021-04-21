#include<stdio.h>
void myFun(){
    char c;
    printf("Enter Alphabate : ");
    scanf("%c",&c);
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U'){
        printf("It's Vowel");
    }
    else{
        printf("It's Consonant");
    }
}

void main(){
    myFun();
}