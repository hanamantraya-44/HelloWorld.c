#include<stdio.h>
int main ()
{
    float pi=3.14, area;
    int r;
    printf("enter radius of circle");
    scanf("%d",&r);
    area=pi*r*r;
    printf("the area of circle is:%.2f", area);
    return 0;
    
}
