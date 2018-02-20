#include<stdio.h>
void main()
{
int a,b,i,j;
printf("Enter the number:\n");
scanf("%d\n%d\n",&a,&b);
i=a*b;
for(j=0;j<=i;j++)
{
if(i==(j*j))
{
printf("yes");    
}
}
}
