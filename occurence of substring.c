#include<stdio.h>
int main()
{
    char str[10],sub[10];
    int i,j,l1,l2,check=0,check1=0;
    printf("enter the string\n");
    scanf("%[^\n]s",str);
    //fgets (str, 100, stdin);
    l1=strlen(str);
    fflush(stdin);
    printf("enter the sub string\n");
    scanf("%[^\n]s",sub);
    //fgets (sub, 100, stdin);
    l2=strlen(sub);
    for(i=0; i<l1;)
    {
        j=0;
        check=0;
        printf("check1\n");
        while((str[i]==sub[j]))
        {
            printf("check2\n");
            check++;
            i++;
            j++;
        }
        if(check==l2)
        {
            printf("check3ssasasa\n");
            check1++;
        }
        else
        {
            i++;
            printf("check4\n");
        }
        printf("check5\n");
    }
    printf("the count is %d",check1);
    printf("the character is %c",str[6]);
}
