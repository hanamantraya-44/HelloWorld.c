#include<stdio.h>
#include<string.h>
int i,n;
int each(char arr[])
{
    for (i=0;i<n;i++){
        printf ("%c ",arr[i]);
    }
}
int main()
{
    char arr[]={"sunil"};
    n=strlen(arr);
    int res=each(arr);
    return 0;
}
