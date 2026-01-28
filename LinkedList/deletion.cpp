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

struct node* deletefirst(struct node *head){
    struct node *p=head;
    head=head->next;
    free(p);
    return head;
}
struct node* deleteindex(struct node *head,int index){
    struct node *p=head;
    struct node *q=head->next;
    int i=0;

    while (i!=index-1)
    {
        p=p->next;
        q=q->next;
        i++;
    }

    p->next=q->next;
    free(q);
    return head;
}

struct node* deletelast(struct node *head){
    struct node *p=head;
    struct node *q=head->next;

    while (q->next!=NULL){
        p=p->next;
        q=q->next;
    }

    p->next=NULL;
    free(q);
    return head;
}

struct node* deletenode(struct node *head,int value){
    struct node *p=head;
    struct node *q=head->next;
    while(q->data!=value && q->next!=NULL)
    {
        p=p->next;
        q=q->next;
    }
    if(q->data==value){
        p->next=q->next;
        free(q);
    }

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
    //head=deletefirst(head);
    //head=deleteindex(head,2);
    //head=deletelast(head);
    head=deletenode(head,11);
    linklist(head);
    return 0;
}