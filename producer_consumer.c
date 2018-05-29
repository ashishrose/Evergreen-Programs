#include<stdio.h>
void produce(int buffer[100],int *size)
{
    printf("\n the buffer add is %f",&buffer[0]);
}
int main()
{
    int i,j,buffer[100],size,opt;
    printf("\n enter the buffer size\n");
    scanf("%d",&size);
    //initialization of the buffers to zero value
    for(i=0;i<size;i++)
    {
        buffer[i]=0;
    }
    printf("\n the buffer add is %f",&buffer[0]);
    printf("\n select the option\n");
    scanf("%d",&opt);
    printf("\n1.produce\n2.consume\n3.view\n4.exit");

    switch(opt)
    {
    case 1:
        produce(buffer,&size);
    }
}
