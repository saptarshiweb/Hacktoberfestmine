#include<iostream>
using namespace std;

struct node{
    node *prev;
    int data;
    node *next;
};



node* insert(node* head,int val,int pos){
    node *newNode = new node();
    newNode->prev=NULL;
    newNode->data=val;
    newNode->next=NULL;
    if(pos==1){
        newNode->next=head;
        newNode->prev=NULL;
        if(head){
            head->prev=newNode;
        }
        head=newNode;
        return head;
    }
    node *temp = head;
    int k=1;
    while(k<pos-1 && temp->next){
        temp=temp->next;
        k++;
    }
    newNode->next=temp->next;
    newNode->prev=temp;
    // temp->prev=newNode;
    if(temp->next){
        temp->next->prev=newNode;
    }
    temp->next=newNode;
    return head;
}

node* remove(node *head,int pos){
    node *temp1=head,*temp2;
    if(pos==1){
        head=head->next;
        if(head){
            head->prev=NULL;
        }
        delete temp1;
        return head;
    }
    temp2=head;
    int k=1;
    while(k<pos && temp2->next){
        temp2=temp2->next;
        k++;
    }
    temp2->prev->next=temp2->next;
    if(temp2->next){
        temp2->next->prev=temp2->prev;
    }
    delete temp2;
    return head;
}

void print(node *head){
    node *temp = head;
    cout<<"The List is: ";
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<'\n';
}

int main(){
    node *head=NULL;
    // head = push_at_front(head,1);
    // head = push_at_front(head,1);
    // head = push_at_front(head,1);
    // head = push_at_front(head,1);
    // head = push_at_front(head,1);
    // head = push_at_front(head,1);
    head = insert(head,1,1);
    head = insert(head,2,2);
    head = insert(head,3,2);
    head = insert(head,4,2);
    head = insert(head,5,5);
    head = insert(head,6,6);
    print(head);
    head = remove(head,1);
    head = remove(head,2);
    head = remove(head,3);
    print(head);
    return 0;
}