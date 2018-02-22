#include <stdio.h>
int main()
{
int a,i,c=0;
printf("enter the number:\n");
scanf("%d\n",&a);
for(i=1;i<=a;i++)
{
    if(a%i==0)
    {
    c++;    
    }
}
if(c!=2)
printf("yes");    
else
printf("no");
    return 0;
}
