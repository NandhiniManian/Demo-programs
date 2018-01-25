#include<stdio.h>
#include<string.h>
void main()
{
char a[100];
int b,c,i;
printf("enter the string:\t");
gets(a);

for(i=0;a[i]!='\0';i++)
{
    if(a[i]!='1'||a[i]!='0')
    {
       c++;
    }
}
if(c==0)
{ printf("yes");
    
}
}
