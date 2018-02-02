#include <stdio.h>
#include<string.h>
void main() {
	char a[100];
	int i,c=1;
	printf("enter the string:");
	gets(a);
	for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==' ')
        {
    c++;
        }
    }printf("%d",c);
	
}
