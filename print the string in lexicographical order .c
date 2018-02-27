#include <stdio.h>
#include<string.h>
int main()
{
char st[10],t;
int i,j;
printf("enter the string:\n");
gets(st);
for(i=0;st[i]!='\0';i++)
{
for(j=i+1;st[i]!='\0';j++)
{
if(st[i]>st[j])
{
t=st[j];
st[j]=st[i];
st[i]=t;
}
}
}
for(i=0;st[i]!='\0';i++)
{
printf("%s",st[i]);
}
return 0;
}
