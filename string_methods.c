#include <stdio.h>
#include<string.h>
int main() {
  char name[20];
  printf("Enter your name:%s\n",name);
    scanf("%s",&name);
  int length=strlen(name);
  printf("length is:%d\n",length);
  strcpy(name,"rajakumar ");
  printf("%s\n",name);
  int comparision=strcmp("chandru","chdr");
  printf("%d\n",comparision);
  strcat(name,"coder");
  printf(" %s",name);
    return 0;
}
