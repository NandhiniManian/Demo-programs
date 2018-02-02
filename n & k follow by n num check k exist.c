#include <stdio.h>

int main()
{
int k,n,i,a[10];
printf("enter the n and k values:\n");
scanf("%d\n%d\n",&n,&k);
for(i=0;i<n;i++)
{
scanf("%d\n",&a[i]);    
}
for(i=0;i<n;i++)
{
if(a[i]==k)
{
printf("yes");    
}
}

    return 0;
}



