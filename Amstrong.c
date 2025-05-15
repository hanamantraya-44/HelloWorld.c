#include<stdio.h>
int main(){
    int num,result=0,rem,original;
    printf("Enter the number:");
    scanf("%d",&num);
    original=num;
    while(num!=0){
        rem=num%10;
        result+=rem*rem*rem;
        num=num/10;
    }
    if(result==original){
        printf("this is amstron number");
    }
    else{
        printf("this is not a amstrong number");
    }
    
}
