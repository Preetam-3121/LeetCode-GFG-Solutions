#include<iostream>
#include<cstddef>
using namespace std;

struct node
{
    int data;
    struct node* next;
    
};

void linklist(struct node *ptr){
    while (ptr!=NULL)
    {
        cout<<"Element: "<<ptr->data<<endl;
        ptr=ptr->next;
    }
    

}

struct node* insertfirst(struct node *head,int data){
    struct node *ptr =(struct node*)malloc(sizeof(struct node));
    ptr->next=head;
    ptr->data=data;
    return ptr;
}
struct node* insertindex(struct node *head,int data,int index){
    struct node *ptr =(struct node*)malloc(sizeof(struct node));
    struct node *p=head;
    int i=0;

    while (i!=index-1)
    {
        p=p->next;
        i++;
    }

    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    return head;
}

struct node* insertlast(struct node *head,int data){
    struct node *ptr =(struct node*)malloc(sizeof(struct node));
    struct node *p=head;

    while (p->next!=NULL)
        p=p->next;

    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    return head;
}

struct node* insertnode(struct node *head,struct node *prevNode,int data){
    struct node *ptr =(struct node*)malloc(sizeof(struct node));
    struct node *p=prevNode;

    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    return head;
}


int main(){
    struct node * head;
    struct node * second;
    struct node * third;

    //Allocate memory for the nodes in the linked list in heap
    head=(struct node *)malloc(sizeof(struct node));
    second=(struct node *)malloc(sizeof(struct node));
    third=(struct node *)malloc(sizeof(struct node)); 

    //link frst and second nodes
    head->data=7;
    head->next=second;

    //link second and third nodes
    second->data=11;
    second->next=third;

    //terminate the list at the third node
    third->data=66;
    third->next=NULL;
    
    linklist(head);
    //head=insertfirst(head,56);
    //head=insertindex(head,56);
    //head=insertlast(head,56);
    head=insertnode(head,second,56);
    linklist(head);
    return 0;
}