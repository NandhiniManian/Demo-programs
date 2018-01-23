#include<string.h>
int main(void) {
	char a[100];
	int i,count=0;
	printf("enter the string:");
	gets(a);
	for(i=0;i<=100;i++)
	{
	if(a[i]=='.')
	{
	count++;	
	}
	}
	printf("there are %d lines",count);
	return (0);
}
