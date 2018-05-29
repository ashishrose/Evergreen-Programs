#include<stdio.h>
#include<stdlib.h>

typedef struct list
{

    int val;
    struct list *next;
} node;

void display(node * p)
{
    if(p->next==NULL)
    {
        printf(" The List is empty ");
        return;
    }
    while(p->next!=NULL)
    {
        p=p->next;
        printf(" %d ->",p->val);
    }
    printf(" NULL");
}
void create(node *p)
{
    int n,val;
    printf("\n Enter no of Blocks : ");
    scanf("%d",&n);
    while(n>0)
    {
        node *temp=(node *)malloc(sizeof(node));
        p->next=temp;
        printf(" Enter val of block : ");
        scanf("%d",&val);
        temp->val=val;
        temp->next=NULL;
        p=p->next;
        n--;

    }
}
void first(node *p,node *p2)// first fit algorithm .....p free list .....p2 allocated list
{
    int val;
    printf("\n Enter Val mem :");
    scanf("%d",&val);
    node *par=p;
    while(p2->next!=NULL)// adding at the end
    {
        p2=p2->next;
    }
    while(p->next!=NULL)
    {
        p=p->next;
        if(p->val>=val)
        {
            par->next=p->next;
            p2->next=p;
            p->next=NULL;
            printf("\n Allocated  ");
            return;
        }
        par=par->next;
    }
    printf("\n Not Allocated  ");
}
void worst(node *p,node *p2)// worst fit algorithm .....p free list .....p2 allocated list
{
    int val=0,n;
    printf("\n Enter Val mem :");
    scanf("%d",&n);
    node *p1=p;
    while(p1->next!=NULL)

    {
        p1=p1->next;
        if(p1->val>val)// to find out the biggest value
            val=p1->val;
    }
    if(n>val)// if the requested memory is greater than the existing memory then it is unallocated
    {
        printf("\n Not Allocated ");
        return;
    }
    node *par=p;
    while(p2->next!=NULL)
    {
        p2=p2->next;
    }
    while(p->next!=NULL)
    {
        p=p->next;
        if(p->val==val)
        {
            par->next=p->next;
            p2->next=p;
            p->next=NULL;
            printf("\n Allocated ");
            return;
        }
        par=par->next;
    }
    printf("\n Not Allocated ");
}
void best(node *p,node *p2)// best fit algorithm.....p free list .....p2 allocated list
{
    int val,n;
    printf("\n Enter Val mem :");
    scanf("%d",&n);
    val=n;
    node *p1=p;
    while(p1->next!=NULL)
    {
        p1=p1->next;
        if(p1->val>=n&&p1->val-n<val)
            val=p1->val-n;
    }
    node *par=p;
    while(p2->next!=NULL)
    {
        p2=p2->next;
    }
    while(p->next!=NULL)
    {
        p=p->next;
        if(p->val-n==val)
        {
            par->next=p->next;
            p2->next=p;
            p->next=NULL;
            printf("\n Allocated ");
            return;
        }
        par=par->next;
    }
    printf("\n Not Allocated  ");
}
int main()
{

    node freeList,allocatedList;
    freeList.next=NULL;
    allocatedList.next=NULL;
    printf("\n Creating Free List.");
    create(&freeList);
    printf("\n FreeList is \n  ");
    display(&freeList);
    printf("\n Allocated List is \n  ");
    display(&allocatedList);
    do
    {
        printf("\n 1.First Fit");
        printf("\n 2.Best Fit");
        printf("\n 3.Worst Fit");
        printf("\n 4.Exit");
        printf("\n Enter option :");
        int opt;
        scanf("%d",&opt);
        switch(opt)
        {
        case 2:
            best(&freeList,&allocatedList);
            printf("\n FreeList is \n  ");
            display(&freeList);
            printf("\n Allocated List is \n  ");
            display(&allocatedList);
            break;
        case 1:
            first(&freeList,&allocatedList);
            printf("\n FreeList is \n  ");
            display(&freeList);
            printf("\n Allocated List is \n  ");
            display(&allocatedList);
            break;
        case 3:
            worst(&freeList,&allocatedList);
            printf("\n FreeList is \n  ");
            display(&freeList);
            printf("\n Allocated List is \n  ");
            display(&allocatedList);
            break;
        case 4:
            printf("\n exit \n");
            return 0;
            break;

        }
    }
    while(1);

    printf("\n");
    return 0;
}
