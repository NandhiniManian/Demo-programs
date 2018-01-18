#include<stdio.h>
void main()
{
int a=0,b=1,n,s,t=1;
printf("Enter the number:\t");
scanf("%d",&n);
printf("%d%d",a,b);
while(t<=n-2)
{
s=a+b;
t++;
printf("%d\n",s);
a=b;
b=s;
}

}
