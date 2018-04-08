#include <stdio.h>
#include<string.h>
void main()
{
    char s[10];
    int i;
    printf("enter the string:");
    scanf("%s",s);
    for(i=0;i<strlen(s);i++)
    {
        printf("%c",s[i]);
        i++;
    }
    for(i=1;s[i]!='\0';i++)
    {
        printf("%c",s[i]);
        i++;
    }
}
