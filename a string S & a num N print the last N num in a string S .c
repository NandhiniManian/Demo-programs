#include <stdio.h>
#include<string.h>
int main()
{
char a[10];
int l,n,i;
printf("enter the string:\n");
gets(a);
printf("enter the n value:\n");
scanf("%d\n",&n);
l=strlen(a);
for(i=0;i<n;i++)
{
printf("%c",a[l-1]); 
l--;
}
return 0;
}

