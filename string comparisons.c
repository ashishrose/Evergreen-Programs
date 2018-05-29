#include<stdio.h>
#include<string.h>
int main()
{
    char arr[100],brr[100];
    static int i,j,len1,len2,flag=2;
    printf("\nenter a string\n");
    scanf("%[^\n]s",arr);
    fflush(stdin);

    printf("\nenter next string\n");
    scanf("%[^\n]s",brr);

    len1=strlen(arr);
    len2=strlen(brr);
    if(len1==len2)
    {
        while(arr[i]!='\0')
        {
            if(arr[i]!=brr[i])
            {
                flag=1;
                break;
            }
            i++;
        }
    }
    else
    {
        printf("the strings are not equal\n");
    }

    if(flag==0)
    {
        printf("the strings are the same\n");
    }
    else
    {
        printf("the strings are not same\n");
    }
}
