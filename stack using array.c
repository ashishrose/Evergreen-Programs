#include<stdio.h>
int insert(int num,int size,int arr[],int top)
{
    top++;
    if(top > size-1)
    {
        printf("the stack is filled and cannot be inserted!!!!!\n");
        return top-1;
}
    else
    {
        arr[top]=num;
        return top;
    }
}
      int delete(int size,int top,int arr[])
{
if(top == -1    )
    {
printf("the stack is empty and cannot be deleted!!!!!\n");
        return top;
    }
    else
    {
top--;        return top;
    }
}
int main()
{
    int arr[100],



    size,num,top=-1,i,j,option,con=0;
                printf("enter the size of stack\n");
    scanf("%d",&size);
    printf("\ndo you want to continue\n");
    scanf("%d",&con);
    do
    {
        printf("pls enter the option\n 1.insert\n2.delete\n");
        scanf("%d",&option);
        switch(option)
        {
        case 1:
            printf("\nenter the number to be inserted\n");
            scanf("%d",&num);
            top=insert(num,size,arr,top);
            printf("the stack is \n\n");
            for(i=0; i<=top; i++)
            {
                printf("%d ",arr[i]);
            }
            printf("\n");
            break;
        case 2:
            top=delete(size,top,arr);
            for(i=0; i<=top; i++)
            {
                printf("%d ",arr[i]);
            }
            printf("\n");
            break;
        }
    }
    while(con==1);
}
