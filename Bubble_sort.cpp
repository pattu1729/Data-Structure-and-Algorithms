#include<stdio.h>

void swap(int *a,int *b)
{
int temp=*a;
*a=*b;
*b=temp;
}

void bubbleSort(int array[],int n)
{
int i,j;
for(i=0;i<n-1;i++) for(j=0;j<n-i-1;j++)
if(array[j]>array[j+1]) swap(&array[j],&array[j+1]);
}

void printarray(int array[],int size)
{
int i; for(i=0;i<size;i++)
printf("%d\n",array[i]);

}

int main()
{
int array[]={15,46,87,56,-1};
int size=sizeof(array)/sizeof(array[0]); bubbleSort(array, size);
printf("Sorted array is"); printarray(array,size); return 0;
}

