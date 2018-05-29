#include <stdio.h>
int main()
{
    int n1, n2, n3, n4, g,l;

    printf("Enter two positive integers for finding the hcf : ");
    scanf("%d %d",&n1,&n2);
    n3 = n1;
    n4 = n2;
    while(n1!=n2)
    {
        if(n1 > n2)
            n1 -= n2;
        else
            n2 -= n1;
    }
    g = n1;
    printf("GCD = %d",g);
    l = (n3 * n4)/g;
    printf("\nLCM = %d",l);
}
// hcf for more than 2 numbers

/*int main()
{
    int hcf(int a, int b)
    {
        if(a%b == 0)
        {
            return b;
        }
        else
            return(hcf(b,a%b));
    }
    int i,j,arr[10],n,h;
    printf("\n enter the count of the no to be entered\n");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<n-1; i++)
    {
        h= hcf(arr[i],arr[i+1]);
        arr[i+1]=h;
    }
    printf("\nthe hcf is %d",h);
}*/
