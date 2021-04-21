#include<stdio.h>
#include<math.h>
void myFun(){
    int a,b,c;
    printf("Enter a value : ");
    scanf("%i",&a);
    printf("Enter b value : ");
    scanf("%i",&b);
    printf("Enter c value : ");
    scanf("%i",&c);
    float np=(((-b)+sqrt(pow(b,2)-(4*a*c)))/(2*a));
    float nm=(((-b)-sqrt(pow(b,2)-(4*a*c)))/(2*a));
    printf("Root are %f and %f",np,nm);
}

void main(){
    myFun();
}