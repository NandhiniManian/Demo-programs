#include<stdio.h>
void main()
{
int n,i;
printf("Enter the number:\n");
scanf("%d\n",&n);
for(i=n;;i++)
{
if(i%10==0)
{
printf("\n%d",i);
break;
}
}
return 0;
}
