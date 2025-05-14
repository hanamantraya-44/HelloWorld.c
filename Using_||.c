// Online C compiler to run C program online
#include <stdio.h>

int main() {
  char ch;
  printf ("enter lower case character; ");
  scanf("%c",&ch);
  if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
  {
      printf ("This is vowel\n");
  }
  else
  {
      printf ("This is not a vowel");
  }
}
