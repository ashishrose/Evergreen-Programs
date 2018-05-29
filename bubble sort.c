#include<stdio.h>
void bubble_sort(int arr[10],int n)
{
    int temp,j,i,k=0;
    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-i-1; j++)
        {
            if(arr[j]>arr[j+i])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                n++;
            }
        }
    }
    printf("\nthe sorted array is \n");
    for(i=0; i<n; i++)
    {
        printf("%d",arr[i]);
    }
    printf("the num is %d",k);
}
int main()
{
    int arr[10],n,i,j,temp;
    printf("enter the size of an array\n");
    scanf("%d",&n);
    printf("enter an array\n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("the unsorted array is \n");
    for(i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
    // main logic starts
    bubble_sort(arr, n);
}
