#include<string.h>
int main(void) {
	char a[100];
	int i,count=0,c=0;
	printf("enter the string:");
	scanf("%[^\n]s",a);
	for(i=0;a[i]!='\0';i++)
    {
    	if(a[i]>='1'&&a[i]<='9')
	{
	count++;	
	}
        
    }printf("there are %d numeric values \n",count);
	return (0);
}

