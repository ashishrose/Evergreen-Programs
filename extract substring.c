#include<stdio.h>
/*extract the substring of the given length from the center of the given*/
int main()
{
    char arr[100],brr[100];
    static int size,i,j,len,mid,start,end;
    printf("enter the string\n");
    scanf("%[^\n]s",arr);
    puts(arr);
    len=strlen(arr);
    printf("\nthe len is %d",len);
    mid=len/2;/*the middle of the given string is found out*/
    printf("\n the mid is %d",mid);
    printf("enter the size of the req string\n");
    scanf("%d",&size);
    /*the start and the end pointers are set */
    if(size%2==0)/*the size of the req string is even*/
    {
        start=mid;
        start=start-((size/2)-1);
    }
    else
    {
        start=mid;
        start=start+(size/2);
    }
    /*copying the substring to the new array*/
    for(i=start; i<=end; i++)
    {
        brr[j]=arr[i];
        j++;
    }
    brr[j]='\0';
    /*printing the substring*/
    puts(brr);
}
