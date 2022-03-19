#include<stdio.h>
int main()
{
    int a[20];
    int n,i,j;
    printf("enter the no of elements:");
    scanf("%d",&n);
    printf("enter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int temp=0;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("selection sorted array is:");
    for(i=0;i<n;i++)
    {
        printf("%d \n",a[i]);
    }
}

