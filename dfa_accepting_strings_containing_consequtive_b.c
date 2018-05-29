/*
algorithm
initialize state=0
read input string
read a character

step 4 if input = b
    then if state = 0, set state = 1
    if state = 1, set state = 2
    if state = 2, set state = 3 and go to step 5

if end of the string go to step 5
    else
     set state = 0 and go to step 4
step 5
if state = 3
    and if input = a or b then set state = 3

if state = 3
     then the input is valid

otherwise print the string is invalid

stop
*/

#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    int i,state=0,j,l=0,opt;
    printf("\n enter a string\n");
    gets(str);
    printf("\n The string is:");
    puts(str);
    l=strlen(str);// to find the length of the string

    for(i=0;i<l;i++)// looping till  the end of the string
    {
        if(str[i]=='b')
        {
            state =1;
            i++;
        }
        if(str[i]=='b')
        {
            state =2;
            i++;
        }
        if(str[i]=='b')
        {
            state =3;
            i++;
        }
    }

    if(state==0 || state==3)
    {
        printf("\n the string is accepted\n");
    }
    else
    {
        printf("\n not accepted\n");
    }
}
