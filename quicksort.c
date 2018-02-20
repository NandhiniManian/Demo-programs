#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
void quick(int A[SIZE],int,int);
int partition(int A[SIZE],int,int);
void swap(int A[SIZE],int*,int*);
int n;
int main()
{
int i;
int A[SIZE];
printf("enter the no of elements:\n");
scanf("%d\n",&n);
for(i=0;i<n;i++)
{
scanf("%d\n",&A[i]);    
}
quick(A,0,n-1);
printf("after sorting:\n");
for(i=0;i<n;i++)
{
printf("\t%d",A[i]);    
}
}
void quick(int A[SIZE],int low,int high)
{
    int m,i;
if(low<high)
{
m=partition(A,low,high);
quick(A,low,m-1);
quick(A,m+1,high);
}
}
int partition(int A[SIZE],int low,int high)
{
int pivot=A[low],i=low,j=high;
while(i<=j)
{
while(A[i]<=pivot)
i++;
while(A[j]>pivot)
j--;
if(i<j)
swap(A,&i,&j);
}
swap(A,&low,&j);
return j;
}
void swap(int A[SIZE],int*i,int*j)
{
int temp;
temp=A[*i];
A[*i]=A[*j];
A[*j]=temp;
}


