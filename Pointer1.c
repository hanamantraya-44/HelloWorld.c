#include <stdio.h>

int main() {
int a=5;
int *ptr=&a;
printf ("before a is:%d\n",a);
*ptr+=10;
printf ("After a is :%d",a);
    return 0;
}
