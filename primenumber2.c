#include <stdio.h>
#include<math.h>

int main() {
int i,num, isprime=1;
printf ("Enter the numbers from:");
scanf("%d",&num);
int limit=(int)sqrt(num);
for(i=2;i<=num/2;i++){
    if(num%2==0){
    isprime=0;
    break;
    }
}
if(isprime){
    printf ("Is prime number");
}
else{
    printf ("Is not a prime number");
}
    return 0;
}
