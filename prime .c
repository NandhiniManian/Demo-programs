#include <stdio.h>

void main()
{
int a,i,c;
printf("enter the number :\t");
scanf("%d\n",&a);
for(i=1;i<=a;i++)
{
if(a%i==0) 
{
c++;    
}
}
if(c==2)
{
printf("yes");    
}
}
