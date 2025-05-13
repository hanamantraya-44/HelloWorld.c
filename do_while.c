#include<stdio.h>
int a=5;

int main(){
    int i=1;
    do{
        printf("%dx%d=%d\n", a,i,a*i);
    i++;
    }
    while(i<=10);
    
}
