#include<stdio.h>
void main()
{
int n,m,s;
printf("Enter the numbers:\n");
scanf("%d%d",&n,&m);
s=n;
n=m;
m=s;
printf("after swapping:\n");
printf("%d\t%d",n,m);	
}
