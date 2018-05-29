#include<stdio.h>

int insert(int size,int arr[],int back,int num)
{
    printf("\nthe val of back is %d\n",back);
    if(back < size-1)
    {
        back++;
        arr[back]=num;/*insertion at the back*/
        return back;
    }
    else
    {
        printf("the queue is full!!!!!!!!!!\n");
        return back;
    }
}

int deleted(int front,int back,int arr[])
{
    int i;
    if(back == -1)
    {
        printf("the queue is empty !!!!\n");
        return back;
    }

    if(front < back)
    {
        for(i=0; i<back; i++)
        {
            arr[i]=arr[i+1];
        }
        back=back-1;
    }
    printf("the queue is \n");
    for(i=front+1; i<=back; i++)
    {
        printf("%d ",arr[i]);
    }
    return back;
}

int main()
{
    int arr[100],i,j,size,front=-1,back=-1,num,option=0;
    printf("enter the size of an array\n");
    scanf("%d",&size);
    do
    {
        printf("\nenter the option\n1. INSERT\n2. DELETE\n");
        scanf("%d",&option);
        switch(option)
        {
        case 1:

            printf("\nenter the number to be inserted\n");
            scanf("%d",&num);
            back=insert(size,arr,back,num);/*the insertion operation*/

            printf("the queue is \n");
            for(i=front+1; i<=back; i++)/*here (front+1) is always 0*/
            {
                printf("%d ",arr[i]);
            }
            break;

        case 2:
            back=deleted(front,back,arr);
            break;
        }
    }
    while(option==1 || option==2);
}
