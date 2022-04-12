#include "stdio.h"
#include "stdlib.h"
struct student 
{
    int roll;
    char name[20];
    struct student *link;
};
struct student *createlinklist();
int traverse(struct student *);
void middle(struct student *,int);
main()
{
    struct student *b;
    b=createlinklist();
    int c=traverse(b);
  
    int d=c/2;

    middle(b,d);

}
struct student *createlinklist()
{
    struct student *p,*q,*firstnode;
    p=(struct student *)malloc(sizeof(struct student));
    firstnode=p;
    printf("Enter roll- ");
    scanf("%d",&p->roll);
    printf("Enter name- ");
    scanf("%s",p->name);
    char x[5];
    while(1)
    {
        printf("Do you want to continue? yes OR no - ");
        scanf("%s",x);
        if(strcmp(x,"no")==0)
            break;
    
    q=(struct student *)malloc(sizeof(struct student));
    p->link=q;
    p=q;
    printf("Enter roll- ");
    scanf("%d",&p->roll);
    printf("Enter name- ");
    scanf("%s",p->name);

    }
    p->link=0;
    return firstnode;


}
int traverse(struct student *p)
{   
    int a=0;
    while(p!=0)
    {
        p=p->link;
        a++;
    }
    return a;

}
void middle(struct student *p,int c)
{   
    
    for(int i=0;i<c;i++)
    {   
       
            p=p->link;
        
    }
    printf("hello %d %s ",p->roll,p->name);
}