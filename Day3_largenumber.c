#include <stdio.h>
int large(int a, int b, int c){
    if(a>b && a>c){
        return a;
    }
    else if(b>a&&b>c){
        return b;
    }
    else{
        return c;
    }
}
int main(){
    int result=large(5, 6,7);
    printf ("Large is:%d",result);
    
}
