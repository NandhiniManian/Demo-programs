#include <stdio.h>

int main()
{
    int a,b;
    printf("enter the numbers:\n");
    scanf("%d\t%d\t",&a,&b);
    printf("before swapping the numbers are:%d\t%d\t",a,b);
    a^=b^=a^=b;
    printf("after swapping the numbers are:%d\t%d\t",a,b);
    return 0;
}
