#include <stdio.h>
#include<string.h>
void main()
{
char a[100];
int b=0,n,i;
printf("enter the string:");
gets(a);
for(i=0;a[i]!='\0';i++)
{
b++;	
}
scanf("%d\n",&n);
for(i=0;i<n;i++)
{
printf("%c",a[i]);	
}


}
