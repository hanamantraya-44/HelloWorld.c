#include<stdio.h>
int main(){
    int year,leap;
    printf("Enter your year:");
    scanf("%d",&year);
    leap=(year%4==0&&year%100!=0)||(year%400==0);
    if(leap=1)
    {
        printf("%d is a leap year\n",year);
    }
    else
    {
        printf("%d is not leap year");
    }
    return 0;
    
}
