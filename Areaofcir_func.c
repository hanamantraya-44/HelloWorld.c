#include<stdio.h>
int r;
int areaofcir (){
    float pi=3.14, area;
    area=pi*r*r;
    return area;
}
int main (){
    printf ("Enter the radius of circle:");
    scanf("%d",&r);
    float result=areaofcir (r);
    printf("Area of circle is:%.2f",result);
    
}
