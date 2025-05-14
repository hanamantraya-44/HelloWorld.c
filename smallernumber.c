#include <stdio.h>

int main() {
int a,b,c;
printf("Enter the value of a,b,c:");
scanf("%d%d%d",&a,&b,&c);
if(a<b&&a<c)
{
    printf("%d is smaller",a);
}
else if(b<a&&b<c){
    printf("%d is smaller",b);
}
else{
    printf("%d is smaller",c);
}
return 0;
}
