#include<stdio.h>
int merge(int arr[],int brr[],int crr[],int n,int m)
{
    int tot = m+n,i=0,j=0,k=0,flag=0,l;/*total size of the new array*/
    while(1)
    {
        if(i>=n)
        {
            flag=1;
            break;
        }
        else if(j>=m)
        {
            flag=2;
            break;
        }

        if(brr[j]<arr[i])
        {
            crr[k]=brr[j];
            k++;
            j++;
        }
        else
        {
            crr[k]=arr[i];
            k++;
            i++;
        }
    }
    if(flag==1)/*first array is the smallest so copying rest of the ele of sec array to the final array*/
    {
        for(l=j; l<m; l++)
        {
            crr[k]=brr[l];
            k++;
        }
    }
    if(flag==2)/*second array is the smallest so copying rest of the ele of first array to the final array*/
    {
        for(l=i; l<n; l++)
        {
            crr[k]=arr[l];
            k++;
        }
    }

}




int main()
{
    int arr[100],brr[100],crr[100],i,j,temp,n,m;
    printf("enter the size of the first array\n");
    scanf("%d",&n);
    printf("\nenter the elements\n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nthe unsorted first array is \n");
    for(i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\nenter the size of the second array\n");
    scanf("%d",&m);
    printf("\nenter the elements\n");
    for(i=0; i<m; i++)
    {
        scanf("%d",&brr[i]);
    }
    printf("\nthe unsorted second array is \n");
    for(i=0; i<m; i++)
    {
        printf("%d ",brr[i]);
    }



    /*sorting first array using insertion sort*/
    for(i=0; i<n; i++)
    {
        temp=arr[i];
        j=i;
        while(temp<arr[j-1] && j>0)
        {
            arr[j]=arr[j-1];
            j=j-1;
        }
        arr[j]=temp;
    }
    printf("\nthe sorted first array is \n");
    for(i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }



    /*sorting second array using insertion sort*/
    for(i=0; i<m; i++)
    {
        temp=brr[i];
        j=i;
        while(temp<brr[j-1] && j>0)
        {
            brr[j]=brr[j-1];
            j=j-1;
        }
        brr[j]=temp;
    }
    printf("\nthe sorted second array is \n");
    for(i=0; i<m; i++)
    {
        printf("%d ",brr[i]);
    }



    /*now the 2 arrays are sorted and now merging is done*/
    merge(arr,brr,crr,n,m);
    printf("\nthe final sorted array is \n");
    for(i=0; i<(m+n); i++)
    {
        printf("%d ",crr[i]);
    }
}
