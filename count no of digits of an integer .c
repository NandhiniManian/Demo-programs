#include <stdio.h>
int main(void) {
int a,s[50],i,c=0;
printf("enter the number:\n");
scanf("%d\n",&a);
while(a!=0)
{
s[i]=a%10;
a=a/10;
i++;
c++;
}
printf("%d\n",c);
return 0;
}
