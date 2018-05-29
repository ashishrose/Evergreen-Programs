#include<stdio.h>
int main()
{
    char str[100],uppr_str[100],j;
    static int i;
    printf("enter the string\n");
    scanf("%[^\n]s",&str);
    printf("the string is \n");
    puts(str);
    /*logic for converting lowercase to uppercase*/
    while(str[i]!='\0')
    {
        if(str[i]==' ')
        {
            uppr_str[i]=str[i];
            i++;
        }
        else
        {
            uppr_str[i]=str[i]-32;
            i++;
        }
    }
    uppr_str[i]='\0';
    printf("the final string is  \n");
    puts(uppr_str);
}
