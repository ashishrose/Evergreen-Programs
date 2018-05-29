#include<stdio.h>
struct process
{
    int pid,st,bt,wt,rt,tt,ft;
};
int main()
{
    struct process p[10],temp;
    int i,j,n,quantum,flag=0;
    static int total,tracer;
    printf("\nenter the no of process\n");
    scanf("%d",&n);
    for(i=0; i<n; i++)// initializing all the variables inside the structure to zero
    {
        p[i].pid = 0;
        p[i].st = 0;
        p[i].bt = 0;
        p[i].wt = 0;
        p[i].rt = 0;
        p[i].tt = 0;
        p[i].ft = 0;
    }

    for(i=0; i<n; i++)
    {
        printf("enter burst time\n");
        scanf("%d",&p[i].bt);
    }
    printf("enter the time quantum\n");
    scanf("%d",&quantum);
    // calculate the total time of the whole processes in the memory
    for(i=0; i<n; i++)
    {
        total = total + p[i].bt;
    }
    //printf("\n the total is %d",total);

    i=0;// to determine the starting process
    while(tracer != total )
    {
        if(flag == 0)
        {

            if(i==0)
            {
               // printf("i=0\n");
                p[i].st = 0;// start time for the first process is 0
                if(p[i].bt > quantum)
                {

                    p[i].rt = p[i].bt - quantum;
                    tracer = tracer + quantum;
                }
                else if(p[i].bt <= quantum)//  here the process is finished
                {
                    p[i].rt = 0;
                    tracer = tracer + p[i].bt;
                    p[i].ft = tracer;
                    p[i].tt = tracer;
                }
            }
            else
            {
                p[i].st = tracer;
                if(p[i].bt > quantum)
                {
                    p[i].rt = p[i].bt - quantum;
                    tracer = tracer + quantum;
                }
                else if(p[i].bt <= quantum)
                {
                    p[i].rt = 0;
                    tracer = tracer + p[i].bt;
                    p[i].ft = tracer;
                    p[i].tt = tracer;
                }
            }
        }
        /*printf("\n the process remaining time after the first iteration\n");
        for(j=0;j<n;j++)
        {
            printf("%d,%d\n",p[i].rt,j);
        }*/
        else if(flag == 1)
        {
           // printf("\n flag is 1\n");
            if(p[i].rt > quantum)
            {
                p[i].rt = p[i].rt - quantum;
                tracer = tracer + quantum;
                //printf("\n flag is 1 if... \n");
            }
            else if (p[i].rt <= quantum && p[i].rt!= 0)
            {
                tracer = tracer + p[i].rt;
                p[i].rt = 0;
                p[i].ft = tracer;
                p[i].tt = tracer;
                //printf("\n flag is 1 else if... \n");
            }
        }
        if(i==n-1)// resetting the process
        {
            i=-1;
            flag = 1;
        }
        i++;
    }
    // calculating waiting time of the processes
    for(i=0;i<n;i++)
    {
        p[i].wt = p[i].ft - p[i].bt;
    }
   /* for(j=0; j<n; j++)
    {
        printf("\n the process is %d and the remaining time is  %d finish time is  %d burst time is %d and waiting time is %d \n",j,p[j].rt,p[j].ft,p[j].bt,p[j].wt);
        printf("\n the tracer is %d\n",tracer);
    }*/

    printf("\n\n\n\n");
    printf("|-------------------------------------------GANTT CHART-----------------------------------------|\n|PROCESS_ID\tBURST TIME\tWAITING TIME\tSTARTING TIME\tFINISH TIME\tTURN AROUND TIME|\n");
    printf("|-----------------------------------------------------------------------------------------------|\n");
    for(i=0;i<n;i++)
    {
        printf("|-----------------------------------------------------------------------------------------------|\n");
        printf("|   %d\t\t   %d\t\t   %d\t\t   %d\t\t   %d\t\t   %d\t\t|\t\n",i,p[i].bt,p[i].wt,p[i].st,p[i].ft,p[i].tt);
        printf("|-----------------------------------------------------------------------------------------------|\n");
    }
}
