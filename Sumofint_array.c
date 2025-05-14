// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int arr[10], i,sum=0;
    printf ("Enter 10 elements to an array:");
    for(i=0;i<10;i++){
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    printf ("sum of all array is:%d",sum);
    return 0 ;
}
