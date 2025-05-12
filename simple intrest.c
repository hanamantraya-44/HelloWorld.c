#include<stdio.h>
float p,t,r,si;
int main(){
    printf("Enter the values of p,t,and r:");
    scanf("%f%f%f",&p,&t,&r);
    si=(p*t*r)/100;
    printf("The simple intrest is=%f",si);
}
