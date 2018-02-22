#include<stdio.h>
void main()
{
float a,t,temp;int N;
printf("enter the number:\t");
scanf("%f\n",&a);
printf("%f\n",a);
temp=a;
t=temp+0.5;
if(t>a)
{
N=temp+1;    
printf("the rounded value is:%d\n",N);
}
else
printf("the rounded value is:%d\n",temp);
}
