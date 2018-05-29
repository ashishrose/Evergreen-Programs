#include<stdio.h>
void main()
{
    int a=0,b=1,c,i,n;
    printf("enter the number\n");
    scanf("%d",&n);
    printf("%d %d ",a,b);
    for(i=1;i<n;i++)
    {
        a=a+b;
        c=a;
        a=b;
        b=c;
        printf("%d ",c);
    }
}
