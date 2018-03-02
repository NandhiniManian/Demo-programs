
#include <stdio.h>
void main(void) {
int a,s[50],i,c=0,t=1;
printf("enter the number:\n");
scanf("%d\n",&a);
while(a!=0)
{
s[i]=a%10;
a=a/10;i++;c++;}
for(i=0;i<c;i++)
{
t=t*s[i];    
}printf("%d",t);
}
