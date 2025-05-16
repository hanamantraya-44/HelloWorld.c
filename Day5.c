#include <stdio.h>
struct books{
    char name[20];
    int edition;
    char genre[20];
    char author[20];
};
int main ()
{
    int i;
    struct books b[20];
    for(i=0;i<5;i++)
    {
    printf ("Enter details for    book%d\n",i+1);
    printf ("Enter book name:");
    scanf ("%s",&b[i].name);
  printf ("Enter author of book:");
  scanf ("%s",&b[i].author);
  printf ("Enter the edition:");
  scanf ("%s",&b[i].edition);
printf ("Enter the book genre:");
  scanf ("%s",&b[i].genre);
    }
    printf ("===========book details=========\n");
    printf ("%-20s %-15s %-10s %-15s\n","Book name ","Author"," Edition","Genre/Type");
    printf ("__________________\n");
    for (i=0;i<5;i++);
    {
        printf ("%-20s %-15s %-10s %-15d",b[i].name,b[i].author,b[i].edition,b[i].genre);
        
    }
    return 0;
}

