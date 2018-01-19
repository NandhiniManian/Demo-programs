#include <stdio.h>

void main() {
int a,b,c=1,i=1;
printf("enter the numbers:");
scanf("\t%d\t%d",&a,&b);
while(i<=b)
{
c=c*a;
i++;
}
printf("%d",c);
}
