#include<stdio.h>
int main()
{
    static int arr[1000],i,j,size,brr[1000],crr[1000],c,d,k,l,temp;
    printf("\n enter the size of an array\n");
    scanf("%d",&size);
    printf("\n enter array\n");
    for(i=0; i<size; i++)
    {
        scanf("\t%d",&arr[i]);
    }
    for(i=0; i<size; i++)
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
    for(i=0; i<size; i++)
    {
        printf("%d ",arr[i]);
    }
    j=0;
    // cutting the whole array into two pieces
    if(size%2 == 0)//the size is even
    {
        for(i=0; i<size/2; i++)
        {
            brr[i]=arr[i];
            c++;
        }
        for(; i<size; i++)
        {
            crr[j]=arr[i];
            j++;
            d++;
        }
    }
    else if(size%2 == 1)// the size is odd
    {
        for(i=0; i<(size+1)/2; i++)
        {
            brr[i]=arr[i];
            c++;
        }
        for(; i<size; i++)
        {
            crr[j]=arr[i];
            j++;
            d++;
        }
    }
    //printing the pieced array
    printf("\n first array\n");
    for(i=0; i<c; i++)
    {
        printf("\t%d",brr[i]);
    }
    printf("\nsecond array\n");
    for(i=0; i<d; i++)
    {
        printf("\t%d",crr[i]);
    }

    printf("\n d is %d\n",d);
    //merging both the results
    j=0;
    for(i=0;i<size;i++)
    {
        if(i%2==0)//even
        {
            arr[i] = brr[k];
            k++;
        }
        else if(i%2==1)//odd
        {
            l++;
            arr[i] = crr[d-l];
        }
    }
    printf("\n the new array is \n");
    for(i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }

}

