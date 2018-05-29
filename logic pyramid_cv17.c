#include<stdio.h>
int main()
{
    int i,j,k,l,arr[2000],n,brr[2000],counter=0,temp,rem,p,flag = 0,nor;
    printf("\n enter the number\n");
    scanf("%d",&n);
    nor = (n*(n+1))/2;// normalized value
    for(i=1; i<=nor; i++)
    {
        arr[i]=(8*i*i)-(2*i);// formula for the sequence
    }
    for(i=1; i<=nor; i++) // printing the series
    {
        printf("\t%d",arr[i]);
    }
    p=n;
    printf("\nseries\n");
    for(i=1; i<=nor;i++)
    {
       // printf("i is %d\n",i);
        flag = 0;
        for(j=i; j<=p; j++)
        {
            printf(" ");
        }

        for(k=i; k>=1;)
        {
            if(flag == 1)
            {
               // printf("\nflag is %d\n",flag);
                counter = 0;
                i++;
                temp = arr[i];
                while(temp>0)
                {
                    temp = temp/10;
                    counter++;
                    // printf("\ncounter is %d\n",counter);
                }
                if(counter == 1)
                {
                    printf("0000");
                }
                else if(counter == 2)
                {
                    printf("000");
                }
                else if (counter == 3)
                {
                    printf("00");
                }
                else if(counter == 4)
                {
                    printf("0");
                }
                printf("%d",arr[i]);
                k--;
                if(k>=1)
                {
                    flag = 1;
                    printf(" ");
                }
            }
            if(flag == 0)
            {
               // printf("\nflag is %d\n",flag);
                counter = 0;
                temp = arr[i];
                while(temp>0)
                {
                    temp = temp/10;
                    counter++;
                    // printf("\ncounter is %d\n",counter);
                }
                if(counter == 1)
                {
                    printf("0000");
                }
                else if(counter == 2)
                {
                    printf("000");
                }
                else if (counter == 3)
                {
                    printf("00");
                }
                else if(counter == 4)
                {
                    printf("0");
                }
                printf("%d",arr[i]);
                k--;
                if(k>=1)
                {
                    flag = 1;
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
}
