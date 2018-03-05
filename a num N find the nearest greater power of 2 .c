#include<stdio.h>
int main(void)
{
int n,c=0,a=1,i;
scanf("%d",&n);
while(n!=1)
{
n=n/2;
c++;
}
for(i=0;i<c+1;i++)
a=a*2;
printf("%d",a);
return 0;
}
