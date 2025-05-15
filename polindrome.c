#include<stdio.h>
int main(){
    int num,reversed=0,rem,original;
    printf("Enter the number:");
    scanf("%d",&num);
    original=num;
    while(num!=0){
        rem=num%10;
        reversed=reversed*10+rem;
        num=num/10;
    }
    if(reversed==original){
        printf("polindrome");
    }
    else{
        printf("not poli");
    }
    
}
