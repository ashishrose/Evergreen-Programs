#include<stdio.h>
void delay()
{
    int j;
    for(j=0;j<1000000000;j++);
}
int main()
{
    int i=0,j=0,arr[10]= {1,2,3,4,5,6,7,8,9},mid,first,last;
    int num;
    printf("\nthe array is \n");
    for(i=0; i<9; i++)

        printf("%d",arr[i]);

    printf("\nenter the number to be searched\n");
    scanf("%d",&num);
    first=0;
    last=9;

    while(first <= last)
    {
        mid=(first+last)/2;
        printf("\n mid = %d",mid);
        printf("\narr[mid]=%d\n",arr[mid]);

        if(arr[mid]==num)
        {
            printf("\nblock 1\n");
            /*delay();*/
            printf("the number is found and the number is %d",arr[mid]);
            break;
        }
        else if(num < arr[mid])
        {
            printf("\nblock 2\n");
            /*delay();*/
            first=0;
            printf("first = %d ",first);
            last=mid-1;
            printf("last = %d",last);
        }
        else if(num > arr[mid])
        {
            printf("\nblock 3\n");
            /*delay();*/
            first=mid+1;
            printf("first = %d ",first);
            last=8;
            printf("last = %d",last);
        }
    }
    if(arr[mid]!=num)
    {
        printf("\nblock 4\n");
        /*delay();*/
        printf("\n the number is not found\n");
    }

}
