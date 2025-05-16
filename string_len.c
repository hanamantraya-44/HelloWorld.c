#include <stdio.h>
#include<string.h>
int main() {
  char name[10];
  printf("Enter your name:%s",name);
    scanf("%s",&name);
  int length=strlen(name);
  printf("length is:%d",length);
    return 0;
}
