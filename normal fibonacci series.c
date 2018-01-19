#include<stdio.h>
void main()
{
int a,b,c,n;
a=0,b=1;
printf("enter the n value:");
scanf("%d",&n);
printf("%d%d",a,b);
while(n!=2)
{
c=a+b;
a=b;
b=c;
printf("%d\n",c);
n--;
}
}
