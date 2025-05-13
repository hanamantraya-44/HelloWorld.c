#include<stdio.h>
int main()
{
    int a,b,sum,difference,product,quotient;
    printf("Enter the values of a nad b:");
    scanf("%d%d",&a,&b);
    sum=a+b;
    difference=a-b;
    product=a*b;
    quotient=a/b;
    printf("%d\n%d\n%d\n%d\n",sum,product,difference,quotient);
}
