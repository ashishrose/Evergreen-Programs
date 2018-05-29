/*
algorithm
open input file
read a character
check if the char is alphabet or not, if yes
    insert the char to an array and check the successive character and compare with successive keyword
        if yes print the keyword
            else print identifier
    else
        check if the char is digit or not, if yes
            print digit
    else
        check whether it is an operator or not if yes print operator

stop
*/

#include<stdio.h>
#include<string.h>
int main()
{
    FILE *fp1;
    char str1[30];
    int l=0,state=0,i,f=0;
    fp1=fopen("input.txt","r");
    while(!feof(fp1))
    {
        fscanf(fp1,"%s",str1);
        l=strlen(str1);
        if(isalpha(str1[0]))// check whether the scanned char is a alphabet or not
        {
            if(strcmp(str1,"int")==0||strcmp(str1,"float")==0||strcmp(str1,"main")==0|| strcmp(str1,"void")==0)// to check whether it is a keyword or not
            {
                f=1;
            }
            else
            {
                if(f!=1)
                {
                    if((isalpha(str1[0]))||(str1[0]=='_'))
                    {
                        f=0;
                    }
                }
            }
            if(f==1)
            {
                printf("\nIt is a keyword %s",str1);
            }
            else
            {
                printf("\nIt is an identifier %s",str1);
            }
            f=0;
        }

        else if(strcmp(str1,"<")==0 || strcmp(str1,">")==0)
        {
            printf("\n It is relational operator %s",str1);
        }

        else if (strcmp(str1," ")==0 || strcmp(str1,";")==0 || strcmp(str1,"{")==0 || strcmp(str1,"}")==0)
        {
            printf("\nmiscellaneous");
        }

        else if(strcmp(str1,"+")==0 || strcmp(str1,"-")==0 || strcmp(str1,"*")==0 || strcmp(str1,"/")==0 || strcmp(str1,"=")==0)
        {
            printf("\n It is an operator %s ",str1);
        }
        else if(strcmp(str1,"==")==0 )
        {
            printf("\n It is an check assignment operator %s",str1);
        }
        else
        {
            printf("\n It is a number = %s ",str1);
        }

    }
    fclose(fp1);
}


