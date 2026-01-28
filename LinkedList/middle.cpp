#include<iostream>
#include<cstddef>
using namespace std;

struct node
{
    int data;
    struct node* next;
};

void linklist(struct node* head){
    while(head!=NULL)
    {
        cout<<"Element : "<<head->data<<endl;
        head=head->next;
    }
    cout<<"\n"; 
}

struct node* middle(struct node * head){
    struct node* slow=head;
    struct node* fast=head;

    while(fast != NULL && fast->next != NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;

}

int main(){

    struct node *head, *second, *third, *fourth, *fifth;
    
    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));
    fifth=(struct node*)malloc(sizeof(struct node));
    
    head->data=10;
    head->next=second;
    
    second->data=20;
    second->next=third;
    
    third->data=30;
    third->next=fourth;

    fourth->data=40;
    fourth->next=fifth;

    fifth->data=50;
    fifth->next=NULL;

    linklist(head);
    cout<<"Middle element of the list : "<<middle(head)->data<<endl;
    
    return 0;
}