#include <stdio.h>

int main()
{
int i,count=0,n;
printf("enter the number:\n");
scanf("%d\n",&n);
for(i=2;i<n;i++)
{
if(n%i==0)
{
count++;    
}
    }
if(count!=0)
{
    printf("yes");
}
else
{
    printf("no");
}
    return 0;
}
