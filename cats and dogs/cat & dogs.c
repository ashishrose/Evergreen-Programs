 /*The program is coded by Mr.Ashish Johnson*/
/* USE THIS CODE FOR THE UNDERSTANDING PURPOSE */
/*for more info connect me through Linkedin facebook google+ or whatsapp me*/
#include<stdio.h>
int main()
{
    int i,j,t,c,d;
   /* printf("enter no of test cases");
    scanf("%d",&t);
    for(j=0; j<t; j++)
    {*/
        printf("enter no cats and dogs");
        scanf("%d%d",&c,&d);
        //main logic starts
        if(c>d)//here c is greater than d
        {
            if(c-d==0)
            {
                i=c/d;
            }
            else if (c-d==1)
            {
                i=c%d;
            }
            else if(c<2*d)
            {
                i=c%d;
            }
            else if(c>2*d)
            {
                i=-1;
            }
        }
        else
        {
            if(d-c==0)
            {
                i=d/c;
            }
            else if(d-c==1)
            {
                i=d%c;
            }
            else if(d<2*c)
            {
                i=d%c;
            }
            else if(d>2*c)
            {
                i=-1;
            }
        }
        printf("the no of groups formed is %d\n",i);
    //}
}
