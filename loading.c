#include<stdio.h>
void delay()
{
    int i;
    for(i=0;i<100000000;i++);
}
void main()
{
    int i,j=219;
    printf("Loading...\n");
    for(i=0;i<15;i++)
    {
        printf("%c",j);
        delay();
    }
}
