#include<stdio.h>
/* pid= process id, at= arrival time, bt =  burst time, wt= waiting time, st= starting time, ft= finish time, tt= turnaround time-*/
struct process
{
    int pid,at,bt,wt,st,ft,tt;
};
int main()
{
    struct process p[10],temp;
    int i,j,n,temp1;
    printf("\n enter no of process\n");
    scanf("%d",&n);


    for(i=0; i<n; i++)
    {
        printf(" enter process_id arrival time and burst time \n");
        scanf("%d",&p[i].pid);
        scanf("%d",&p[i].at);
        scanf("%d",&p[i].bt);
    }

    /*/sorting on the basis of arrival time*///here the sorting algo is insertion sort
    for(i=0; i<n; i++)
    {
        temp=p[i];
        temp1 = p[i].at;
        j=i;
        while(j>0 && p[i].at < p[j-1].at)
        {
            p[j]=p[j-1];
            j=j-1;
        }
        p[j]=temp;
    }
    printf("after sorting\n");
    for(i=0; i<n; i++)
    {
        printf("%d ",p[i].at);
    }
    /* calculation of wt st ft and tt of various processes*/
    for(i=0; i<n; i++)
    {
        if(i==0)
        {
            p[i].wt=0; /* wt for frst process is 0*/
            p[i].st=p[i].at; /* st for frst process is equal to arrival time*/
            p[i].ft=p[i].st + p[i].bt;/* ft of the frst process is the sum of st and bt*/
            p[i].tt=p[i].ft - p[i].at;/* tt of the frst process is the diff of ft and at*/
        }
        else
        {
            p[i].wt=p[i-1].ft - p[i].at;
            p[i].st=p[i-1].ft;//since the next process is starting immediately
            p[i].ft= p[i].st+p[i].bt;
            p[i].tt=p[i].ft - p[i].at;
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
