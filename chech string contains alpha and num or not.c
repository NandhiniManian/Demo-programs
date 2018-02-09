#include <stdio.h>
int main(void) {
char a[50];int i,a_count=0,b_count=0;
printf("enter the number:\n");
scanf("%s",a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]>='a'&&a[i]<='z'||a[i]>='A'&&a[i]<='Z') 
a_count++;
if(a[i]>='1'&&a[i]<='9')
b_count++;
}
if((a_count&&b_count)>0)
{
    printf("yes");
}return 0;
}
