#include <stdio.h>
#include<string.h>
int main(void) {
char a[10];int i,l=0,j,c=0;
printf("enter the string:\n");
gets(a);
printf("%s\n",a);
l=strlen(a);
printf("%d\n",l);
for(i=0,j=l-1;a[i]!='\0';i++)
{

if(a[i]==a[j])
{
c++;
}j--;
}printf("%d",c);
if(c==l)
{
printf("yes");    
}
else
printf("no");
	return 0;
}
