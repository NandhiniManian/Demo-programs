#include <stdio.h>
int main(void) {
int a,sum,i;
printf("enter the number:\n");
scanf("%d",&a);
while(a!=0)
{
sum=sum+a%10;
a=a/10;
i++;
}
printf("%d",sum);
	return 0;
}
