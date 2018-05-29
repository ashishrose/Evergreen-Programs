#include<stdio.h>
#include<conio.h>
void delay()
{
    int i;
    for(i=0; i<100000000; i++)
    {

    }
}
void print(int size,int arr[100])
{
    int i,j;
    printf("\n");
    for(i=0; i<size; i++)
    {
        //delay();
        printf("%d ",arr[i]);
    }
}


int quick_sort(int arr[],int beg,int end)
{
    int pivot,size=end+1;
    if(beg < end)
    {
        pivot=partition(arr,beg,end,size);
        //delay();
        quick_sort(arr,beg,pivot-1);/*for sorting the first half */
        quick_sort(arr,pivot+1,end);/*for sorting the second half */
    }
}

int partition(int arr[],int beg,int end,int size)
{
    int left,right,pivot,temp,flag=0;
    pivot=left=beg;/*the leftmost element is set as the pivot element*/
    right=end;

    while(flag!=1)/*till all the comparisons are done */
    {
        /*right side comparison with the pivot element starts, here the pivot(left most element)
        is compared with the right most element as element greater than the pivot should be
        the rhs of the pivot element*/
        if(flag!=1)
        {
            while(arr[pivot]<=arr[right] && pivot!=right)
            {
                right--;
            }
            /*now the out looping condition from the above while loop is checked that is when the
            pivot element becomes greater than the right most element and the CORROSPONDING
            SWAPPINGS ARE DONE*/
            if(arr[pivot] > arr[right])
            {
                temp=arr[right];
                print(size,arr);
                delay();
                delay();
                delay();
                system("cls");
                //delay();
                arr[right]=arr[pivot];
                print(size,arr);
                delay();
                delay();
                delay();
                system("cls");
                //delay();
                arr[pivot]=temp;
                print(size,arr);
                delay();
                delay();
                delay();
                system("cls");
                //print(size,arr);
                //delay();
                pivot=right;/*now the position of the pivot element is changed*/
            }
            else if(pivot==right)/*the pivot element is found*/
            {
                flag=1;
            }
        }

        if(flag!=1)
        {
            while(arr[pivot]>=arr[left] && pivot!=left)
            {
                left++;
            }
            if(arr[pivot] < arr[left])
            {
                temp=arr[left];
                print(size,arr);
                delay();
                delay();
                delay();
                system("cls");
                arr[left]=arr[pivot];
                print(size,arr);
                delay();
                delay();
                delay();
                system("cls");
                arr[pivot]=temp;
                print(size,arr);
                delay();
                delay();
                delay();
                system("cls");
                pivot=left;/*now the position of the pivot element is changed*/
            }
            else if(pivot==left)
            {
                flag=1;
            }
        }
    }
    return pivot;
}


int main()
{
    int arr[100],i,size;
    printf("enter the size of the array\n");
    scanf("%d",&size);
    printf("enter the no\n");
    for(i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("the unsorted list is \n");
    for(i=0; i<size; i++)
    {
        printf("%d ",arr[i]);
    }
    system("cls");
    delay();
    delay();
    quick_sort(arr,0,size-1);
    system("cls");
   // printf("THE SORTED LIST IS BELOW :) \n");
    for(i=0; i<size; i++)
    {
        delay();
        delay();
        print(size,arr);
        printf("\nFINALLY THE SORTED LIST IS BELOW :) \n");
        system("cls");
        print(size,arr);
        delay();
        system("cls");
    }
    printf("\nFINALLY THE SORTED LIST IS BELOW :) \n");
    print(size,arr);
}
