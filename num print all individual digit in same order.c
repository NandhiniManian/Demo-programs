#include <stdio.h>
int main(void) {
int a,sum[50],i,c=0;
printf("enter the number:\n");
scanf("%d\n",&a);
while(a!=0)
{
sum[i]=a%10;
a=a/10;i++;c++;}
for(i=c-1;i<c;i--)
{
printf("%d\n",sum[i]);
}
	return 0;
}
