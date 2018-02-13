#include <stdio.h>
#include<string.h>
int main()
{
char a[50];int l,b;
printf("enter the string:\t");
gets(a);
l=strlen(a);
printf("%d",l);
if(l%2!=0)
{
b=l/2;
a[b]='*';
printf("%s",a);
}
else
{
b=l/2;
a[b]='*';
a[b-1]='*';
printf("%s",a);
}

    return 0;
}
