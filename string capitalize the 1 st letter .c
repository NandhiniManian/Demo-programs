#include<stdio.h>
int main()
{
    char string[30];
    int i;
    printf("enter string");
    scanf("%[^\n]s",string);
    string[0]=string[0]-32;
    for(i=0;string[i]!='\0';i++)
    {
        if(string[i]==' ')
        {i++;
            string[i]=string[i]-32;
        }
    }
    printf("%s",string);
    return 0;
}
© 2018 GitHub, Inc.
