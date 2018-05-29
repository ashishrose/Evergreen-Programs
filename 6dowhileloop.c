#include<stdlib.h>
#include<stdio.h>
int main()
{
    FILE *fp;
    char filename[10],s;
    int flagb=-1,flagdo=-1,flagwhile=-1;
    printf("enter file name: ");
    fflush(stdin);
    scanf("%s",filename);
    fp=fopen(filename,"r");
    while(!feof(fp))
    {
        s=fgetc(fp);
        if(s=='d')
        {
            if(fgetc(fp)=='o')
            {
                flagdo=1;
            }
        }
        else if(flagdo==1)// if syntax of "do" is correct
        {
            if(s=='{')
            {
                flagb=1;
                flagdo=0;
            }
            else if(s=' ')
            {
                continue;
            }
            else
            {
                break;
            }
        }
        else if(flagb==1 && s=='}')
        {
            flagb=0;
            if(fgetc(fp)=='w' && fgetc(fp)=='h' && fgetc(fp)=='i' && fgetc(fp)=='l' && fgetc(fp)=='e' && fgetc(fp)=='(')
            {
                flagwhile=1;
            }
        }
        else if(s==')' && flagwhile==1)
        {
            if(fgetc(fp)==';')
            {
                flagwhile=0;
            }
            else
            {
                break;
            }
        }
    }
    if(flagwhile==0)
    {
        printf("syntax is correct");
    }
    else
    {
        printf("syntax error");
    }

    return 0;
}

