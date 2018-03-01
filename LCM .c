#include <stdio.h>
void main()
{
int n1,n2,lcm,gcd,i;
printf("enter the numbers:\n");
scanf("%d\n%d\n",&n1,&n2);
for(i=0;i<=n1&&i<=n2;i++)
{
if(n1%1==0||n2%2==0)
{
gcd=i;    
}
}
printf("%d\n",((n1*n2)/gcd));
}
