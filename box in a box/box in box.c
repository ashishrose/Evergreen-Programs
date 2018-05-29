/*The program is coded by Mr.Ashish Johnson*/
/* USE THIS CODE FOR THE UNDERSTANDING PURPOSE */
/*for more info connect me through Linkedin facebook google+ or whatsapp me*/
#include<stdio.h>
int main()
{
    int i,j,n,count=0;
    printf("enter no of boxes\n");
    scanf("%d",&n);
    n=(n*2)+1;
    for(i=0; i<n; i++,count++)
    {
        for(j=0; j<n; j++)
        {
            if(i==0)                    /*/i==0 spcl case*/
            {
                printf("* ");
            }
            if(i==1)                    /*/i==1   spcl case*/
            {
                if(j%2!=0)/*/odd pos*/
                {
                    printf("   ");
                }
                else/*/even pos*/
                    printf("*");
            }
            if(i>1)   /*/common cases*/
            {

                if(i%2==0)                    /*/i==2  even*/
                {
                    if(j>count)
                    {
                        if(j%2!=0)
                        {
                            printf("  ");
                        }
                        else
                            printf("* ");
                    }
                    else
                        printf("* ");
                }
                else                 /*/i==3   odd*/
                {
                    if(j>count)
                    {
                        if(j%2!=0)
                            printf("  ");
                        else
                            printf("* ");
                    }
                    else if(j>0)
                    {
                        printf("  ");
                    }
                    else
                        printf("* ");
                }
            }
        }
        printf("\n");
    }
    return 0;
}
