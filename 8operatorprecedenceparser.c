#include<stdio.h>
char a[4][4]= {'E','>','>','>',                '<','>','<','>',

               '<','>','>','>',                '<','<','<','A'
              };
char stack[10];
char input[10],op;
int top=0,i;
int preceedence(char str)
{
    switch(str)
    {
    case 'i':
        printf("case i\n");
        return 0;
    case '+':
        return 1;
    case '*':
        return 2;
    case  '$':
        return 3;
    }
}
int main()
{
    int i,j;
    stack[0]='$';
    printf("Precedence table");
    printf("\n i  $  *  + \n");
    printf("---------------\n");
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            printf(" %c ",a[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<10; i++)
    {
        printf("%d\t",stack[i]);
    }

    printf("\n Enter the string:");
    gets(input);
    printf("\n The string is:%s",input);

    if(input[0]=='$')
    {
        printf("\n Invalid");
        exit(0);
    }
    for(i=0; input[i]!='\0';)
    {
        printf("kdn %d\n",stack[top]);
        op=a[preceedence(stack[top])][preceedence(input[i])]; // very important logic
        if(op=='<') // push into the stack
        {
            stack[++top]=input[i];
            i++;
        }
        else if(op=='>') //  pop from the stack
        {
            top--;
        }
        else if(op=='E') // the entry is invalid
        {
            printf("\n Invalid");
            break;
        }
        else if(op=='A') // the entry is accepted
        {
            printf("\n Accepted");
            break;
        }
        else
        {
            printf("invalid");
        }
    }
    return 0;
}
