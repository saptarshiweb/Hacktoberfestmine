#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
    struct node* prev;
};
struct node* head,*newnode,*temp;
void create()
{
    head=0;
    int n=1;
    while(n!=0)
    {
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter data");
    scanf("%d",&newnode->data);
newnode->prev=0;
newnode->next=0;
if(head==0)
{
    head=temp=newnode;
}
else
{
    temp->next=newnode;
    newnode->prev=temp;
    temp=newnode;
}
printf("want to continue");
scanf("%d",&n);
}
}
void display()
{
    temp=head;
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
void main()
{
    create();
    display();
}

