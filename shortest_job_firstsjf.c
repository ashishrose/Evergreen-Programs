#include<stdio.h>
struct process
{
    int pid,at,bt,st,ft,wt,tt;
};
int main()
{
    struct process p[10],temp;
    int i,j,n,temp1;
    printf("enter no of process\n");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf(" enter process_id arrival time and burst time \n");
        scanf("%d",&p[i].pid);
        scanf("%d",&p[i].at);
        scanf("%d",&p[i].bt);
    }
    // here the main sorting part take place using insertion sort algorithm applied  on the burst time of the process
    for(i=0; i<n; i++)
    {
        temp = p[i];
        temp1 = p[i].bt;
        j=i;
        while(j>0 && temp1 < p[j-1].bt)
        {
            p[j]=p[j-1];
            j=j-1;
        }
        p[j]=temp;
    }

    printf("\n the list after sorting \n");
    printf("\n\n\n\n");
    printf("|---------------------------------------------------GANTT CHART-------------------------------------------------|\n|PROCESS_ID\tARRIVAL TIME\tBURST TIME\tWAITING TIME\tSTARTING TIME\tFINISH TIME\tTURN AROUND TIME|\n");
    printf("|---------------------------------------------------------------------------------------------------------------|\n");
    for(i=0;i<n;i++)
    {
        printf("|---------------------------------------------------------------------------------------------------------------|\n");
        printf("|   %d\t\t   %d\t\t   %d\t\t   %d\t\t   %d\t\t   %d\t\t   %d\t\t|\t",p[i].pid,p[i].at,p[i].bt,p[i].wt,p[i].st,p[i].ft,p[i].tt);
        printf("|---------------------------------------------------------------------------------------------------------------|\n");
    }
    // main sorting part is completed
    for(i=0; i<n; i++)
    {
        if(i==0)// for the starting process
        {
            p[i].st=p[i].at;
            p[i].ft=p[i].st+p[i].bt;
            p[i].wt=0;
            p[i].tt=p[i].ft-p[i].at;
        }
        else
        {
            p[i].st = p[i-1].bt;
            p[i].ft = p[i].st+p[i].bt;
            p[i].wt = p[i-1].ft - p[i].at;
            p[i].tt=p[i].ft-p[i].at;
        }
    }
    printf("\n\n\n\n");
    printf("|---------------------------------------------------GANTT CHART-------------------------------------------------|\n|PROCESS_ID\tARRIVAL TIME\tBURST TIME\tWAITING TIME\tSTARTING TIME\tFINISH TIME\tTURN AROUND TIME|\n");
    printf("|---------------------------------------------------------------------------------------------------------------|\n");
    for(i=0; i<n; i++)
    {
        printf("|---------------------------------------------------------------------------------------------------------------|\n");
        printf("|   %d\t\t   %d\t\t   %d\t\t   %d\t\t   %d\t\t   %d\t\t   %d\t\t|\t",p[i].pid,p[i].at,p[i].bt,p[i].wt,p[i].st,p[i].ft,p[i].tt);
        printf("|---------------------------------------------------------------------------------------------------------------|\n");
    }

}
