#include<stdio.h>
#include<string.h>
int main()
{

    FILE *fp;
    char str[80],stad[20],addr[40];
    int i=0,len,j=0,k=0,adrs=0;
    fp=fopen("input.txt","r");
    while(!feof(fp))
    {
        fscanf(fp,"%s",str);
        len=strlen(str);
        if(str[0]=='H')
        {
            for(j=2; str[j]!='^'; j++)
            {
                printf("%c",str[j]);
            }
            j++;
            printf("    ");
            for(; str[j]!='^'; j++)
            {
                stad[i]=str[j];
                printf("%c",stad[i]);
            }
        }
        else if(str[0]=='T')
        {
            i=2;
            k=0;
            while(str[i]!='^')
            {
                addr[k]=str[i];
                k++;
                i++;
            }
            addr[k]='\0';
            fflush(stdin);
            adrs=atoi(addr);
            printf("\n%d",atoi(addr));
            i=i+4;
            while(str[i]!='\0')
            {
                if(str[i]=='^')
                {
                    i++;
                    continue;
                }
                printf("\nAddress %d",adrs++);
                printf("\t Value %c%c",str[i],str[i+1]);
                i+=2;
            }
        }
        k=0;
        j=0;
        i=0;
    }
}
