#include <stdio.h>

struct student{
    char name[10];
    int age;
   float weight;
};
int main(){
   struct student s1;
   printf ("Enter the name:");
   scanf ("%s",&s1.name);
   printf("Enter the age:");
   scanf ("%d",&s1.age);
   printf ("Enter the weight:");
   scanf ("%f",&s1.weight);
   printf ("Student details:");
   printf ("Name:%s\nAge:%d\nWeight:%f",s1.name,s1.age,s1.weight);
   return 0;
}
