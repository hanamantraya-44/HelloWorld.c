#include<stdio.h>
int n=10, i,sum=0;
int average ()
{
    int arr[n];
    for(int i=0;i<n;i++){
        scanf ("%d",&arr[i]);
        sum=sum+arr[i];
    }
    int avg=sum/n;
    return avg;
}
int main (){
    printf("Enter 10 elements to an array:");
    int res=average ();
    printf ("average of all array elements is:%d",res);
    return 0;
}
