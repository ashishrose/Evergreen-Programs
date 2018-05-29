#include<stdio.h>
int main()
{
    int i,j;
    printf("\n the acsii values are\n");
    for(i=0;i<255;i++)
    {
        printf("%d = %c\n",i,i);
    }
}


/*int main(int argc, char *a[])
{
	int i,j,n,k;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	    k=65;
	    for(j=n;j>=i;j--,k++)
	    {
	        printf("%c",k);
	        if(i==j)
	        {
	            break;
	        }
	        printf(" ");
	    }
	    printf("\n");
	}
}*/
