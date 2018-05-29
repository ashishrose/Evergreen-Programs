#include<stdio.h>
void insertion_sort(int arr[1000000],int n)
{
    int j,temp,i;
    for(i=0; i<n; i++)
    {
        temp=arr[i];
        j=i;
        while(temp>arr[j-1] && j>0)
        {
            arr[j]=arr[j-1];
            j=j-1;
        }
        arr[j]=temp;
    }
    printf("\nthe sorted array is \n");
    for(i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }

}
int main()
{
    long long int arr[1000000],n,i;
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
        printf("%lld ",arr[i]);
    }
    insertion_sort(arr,n);
}
