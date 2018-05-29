#include<stdio.h>
char gram[8][35]= {"E->TX","X->+TX","X->e","T->FY","Y->*FY","Y->e","F->(E)","F->i"};
char t[10]= {'+','e','*','(',')','i'};
char nt[10]= {'E','T','X','F','Y'};
char f[10],fol[10];
int fi=0,fo=0,k;
int ister(char b)
{
    int i;
    for(i=0; i<6; i++)
    {
        if(b==t[i])
        {
            return 1;
        }
    }
    return 0;
}
int first(char a)
{
    int i,j;
    if(ister(a))
    {
        f[fi]=a;
        fi++;
    }
    else
    {
        for(i=0; i<8; i++)
        {
            if(gram[i][0]==a)
            {
                first(gram[i][3]);
            }
        }
    }
}
int follow(char x)
{
    int i,j;
    if(x=='E')
    {
        fol[fo]='$';
        fo++;
    }
    for(i=0; i<8; i++)
    {
        for(j=3; gram[i][j]!='\0'; j++)
        {
            if(gram[i][j]==x)
            {
                if(gram[i][j+1]=='\0')
                {
                    follow(gram[i][0]);
                    return;
                }
                else
                {
                    fi=0;
                    first(gram[i][j+1]);
                    for(k=0; k<fi; k++)
                    {
                        if(f[k]!='e')
                        {
                            fol[fo]=f[k];
                            fo++;
                        }
                        else
                        {
                            follow(gram[i][0]);
                            return;
                        }
                    }
                }
            }
        }
    }
}
int main()
{
    int i,j;
    char val;
    for(i=0; i<8; i++)
    {
        for(j=0; gram[i][j]!='\0'; j++)
        {
            printf(" %c",gram[i][j]);
        }
        printf("\n");
    }
    for(i=0; i<5; i++)
    {
        printf("\nFirst of %c:",nt[i]);
        first(nt[i]);
        for(j=0; j<fi; j++)
        {
            printf(" %c ",f[j]);
        }
        fi=0;
    }
    printf("\n");
    for(i=0; i<5; i++)
    {
        printf("\nFollow of %c:",nt[i]);
        follow(nt[i]);
        for(j=0; j<fo; j++)
        {
            printf(" %c ",fol[j]);
        }
        fo=0;
    }
    return 0;
}
