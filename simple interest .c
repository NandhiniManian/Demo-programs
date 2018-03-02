#include <stdio.h>
void main()
{
int si,p,t,r;    
printf("To find the simple interest:\n");
printf("Enter the p,t,r values:\n");
scanf("%d\n%d\n%d\n",&p,&t,&r);
si=(p*t*r)/100;
printf("the simple interst is:%d\n",si);
}
