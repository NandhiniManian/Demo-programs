#include <stdio.h>
int main(void) 
{
	int n,a[100],i;
	printf("Enter the n value:\t");
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
	scanf("\n%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t%d\n",a[i],i);
	}
	return 0;
}
