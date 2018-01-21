#include <stdio.h>
void main() 
{
int n,a[100],i,j,b;
printf("enter the  values:");
for(i=0;i<10;i++)
{
	scanf("%d",&a[i]);
	
}
for(i=0;i<10;i++)
{
	for(j=1;j<10;j++)
	{
		if(a[i]<a[j])
		{
			b=a[i];
			a[i]=a[j];
			a[j]=b;
		}
	}
}printf("%d",a[0]);
}
