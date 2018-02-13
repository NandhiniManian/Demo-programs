#include <stdio.h>
void main()
{
int l,r,n,i,c=0;
printf("enter the n,l,r values:\t");
scanf("%d\n%d\t%d\t",&n,&l,&r);
for(i=l;i<=r;i++)
{
if(i==n)
{
c++;   
}
}
if(c!=0)
printf("yes");
else
printf("no");
}
