#include<stdio.h>
#include<string.h>
int main()
{
    char arr[100];
    int i,len,op1,op2,n=0,m,count=0;
    printf("\n enter the string of bits\n");
    scanf("%[^\n]s",arr);
    len = strlen(arr);
    printf("\n teh len is %d",len);
    printf("\n enter the first operation\n");
    scanf("%d",&op1);
    while(n <= len)
    {
        n = n + op1;
        if(n > len)
        {
            break;
        }
        count++;
    }
    n=0;
    printf("\n enter the second operation\n");
    scanf("%d",&op2);
    while(n <= len)
    {
        n = n + op2;
        if(n > len)
        {
            break;
        }
        count++;
    }
    printf("\nthe rem is %d",len - count);
}
