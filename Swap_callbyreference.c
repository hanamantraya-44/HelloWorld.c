// Online C compiler to run C program online
#include <stdio.h>

int main() {
   int x=10, y=20,z;
   int *p1=&x;
   int *p2=&y;
    printf ("Before swap, x=%d y=%d\n",*p1,*p2);
    z=*p1;
    *p1=*p2;
    *p2=z;
    printf ("After swapping, x=%d y=%d",*p1,*p2);
    
}
