/*
algorithm
declare a structure with name and value as a variable
open a file in read mode and save it to fi
open a file in write mode and save it to fo
read a string from fi to s
compare s with #define and if true set next two words to name and value in T
else
    check if s is already stored as a macro name in T, if yes write the corresponding name and value as the output

repeat the above steps till the end of the file

stop
*/
#include<stdio.h>
#include<string.h>

struct macro
{
    char macstr[20];
    char macval[20];
} m[20];

int main()
{

    FILE *fp;
    char c[20];
    int i=0,j=0;

    fp = fopen("macroprocessor.txt","r");// open the input file in read mode

    while(!feof(fp)) // till the end of the file
    {

        fscanf(fp,"%s",c); // scanning the file in read mode

        if(strcmp(c,"#define")==0) // the match is a success
        {
            fscanf(fp,"%s",m[j].macstr);// pointer is always incremented after a successful scan
            fscanf(fp,"%s",m[j].macval);// pointer is always incremented after a successful scan

            j++;
            continue;
        }
        else
        {
            for(i=0; i<=j; i++)
            {
                //printf(" %s %d %d\n",c,i,j);
                if(strcmp(c,m[i].macstr)==0) // match successful, the c is already in the mac.str
                {
                    strcpy(c,m[i].macval);
                    //printf("asdf %s %d %d\n",c,i,j);
                }
            }
        }
        printf("%s",c);
        printf("\n");
    }

}
