#include<iostream>
#include<conio.h>
#include<process.h>
class Linked_List
{
//Structure declaration for the node
struct node
{
int info;
struct node *link;
};
//private structure variable declared
struct node *start;
public:
Linked_List()//Constructor defined
{
start = NULL;
}
//public fucntion declared
void Create_List(int);
void AddAtBeg(int);
void AddAfter(int,int);
void Delete();
void Count();
void Search(int);
void Display();
void Reverse();
};

void Linked_List::Create_List(int data)
{
struct node *q,*tmp;

tmp= (struct node *)new(struct node);
tmp->info=data;
tmp->link=NULL;
if (start==NULL) /*If list is empty */
start=tmp;
else
{ 
q=start;
while(q->link!=NULL)
q=q->link;
q-> link=tmp;
}
}
void Linked_List::AddAtBeg(int data)
{
struct node *tmp;
tmp=(struct node*)new(struct node);
tmp->info=data;
tmp->link=start;
start=tmp;
}
void Linked_List::AddAfter(int data,int pos)
{
	struct node *tmp,*q;
int i;
q=start;
//Finding the position in the linked list to insert
for(i=0;i<pos-1;i++)
{
q=q->link;
if(q==NULL)
{
cout<<“\n There are less than "<<pos<<" elements”;
getch();
return;
}
}/*End of for*/
tmp=(struct node*)new(struct node);
tmp->link=q->link;
tmp->info=data;
q->link=tmp;
}/*End of addafter()*/
//Funtion to delete an element from the list
void Linked_List::Delete()
{
struct node *tmp,*q;
int data;
if(start==NULL)
{
cout<<“\n\nList is empty”;
getch();
return;
}
cout<<“\n\nEnter the element for deletion : ”;
cin>>data;
if(start->info == data)
{
tmp=start;
start=start->link; //First element deleted
delete(tmp);
return;
}
q=start;
while(q->link->link != NULL)
{
if(q->link->info==data) //Element deleted in between
{
tmp=q->link;
q->link=tmp->link;
delete(tmp);
return;
}
q=q->link;
}/*End of while */
if(q->link->info==data) //Last element deleted
{
tmp=q->link;
delete(tmp);
q->link=NULL;
return;
}
cout<<“\n\nElement “<<data<<” not found”;
getch();
}/*End of del()*/
void Linked_List::Display()
{
struct node *q;
if(start == NULL)
{
cout<<“\n\nList is empty”;
return;
}
q=start;
cout<<“\n\nList is : ”;
while(q!=NULL)
{
cout<<q->info;
q=q->link;
}
cout<<“\n”;
getch();
}/*End of display
