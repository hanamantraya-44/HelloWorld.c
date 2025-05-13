#include<stdio.h>
int main(){
int marks;
printf("Enter the marks:");
scanf("%d",&marks);
if(marks>=90)
{
printf("you optained grade A");
}
else if(marks>=80&&marks<90)
{
    printf("you optained grade 'B'");
}
else if(marks>=70&&marks<80)
{
    printf("you optained grade 'c'");
}
else if(marks>=50&&marks<70)
{
    printf("you optained grade'D'");
}
else
{
    printf("you have failed");
}
}
