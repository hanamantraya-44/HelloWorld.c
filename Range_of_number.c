#include<stdio.h>
int main(){
    int num;
    printf("Enter the value of num:");
    scanf("%d",&num);
    if(num>=10&&num<=100){
        printf("the number %d is present between 10 and 100",num);
        
    }
    else{
        printf("the number is not present between 10 and 100");
    }
    return 0;
}

