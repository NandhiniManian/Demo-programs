#include <stdio.h>
void main() 
{
int n,a[100],i,j,b;
printf("enter the n value:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
	
}
for(i=0;i<n;i++)
{
	for(j=1;j<n;j++)
	{
		if(a[i]>a[j])
		{
			b=a[i];
			a[i]=a[j];
			a[j]=b;
		}
	}
}printf("%d",a[n/2]);
}
