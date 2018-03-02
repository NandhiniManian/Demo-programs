#include<stdio.h>
void main()
{
int N,K,i,j,a[10],t=0;
printf("enter the N & k values:\t");
scanf("%d\t%d\t",&N,&K);
printf("%d\t%d\t",N,K);
printf("\nenter the values:\t");
for(i=0;i<10;i++)
{
scanf("%d\t",&a[i]);    
}
for(i=0;i<10;i++)
{
    for(j=i+1;j<10;j++)
  {
    if(a[i]>a[j])
    {
        t=a[i];
        a[i]=a[j];
        a[j]=t;
    }
  }
}
for(i=0;i<10;i++)
{
printf("%d\t",a[i]);    
}
printf("\nthe k th smallest number is:\t");
printf("%d\t",a[K-1]);
}
