#include<iostream>
#include<cstddef>
using namespace std;

struct node
{
    int data;
    struct node* next;
};

void traversal(struct node* head)
{
    while(head!=NULL)
    {
        cout<<"Element : "<<head->data<<endl;
        head=head->next;
    }
    cout<<"\n"; 
}

struct node* reverse(struct node* head)
{
    struct node *curr=head;
    struct node *prev=NULL;
    struct node *next=NULL;

    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;

}

int main(){

    struct node *head, *second, *third;

    head = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));


    head->data=10;
    head->next=second;

    second->data=20;
    second->next=third;
    
    third->data=30;
    third->next=NULL;

    cout<<"Before Reverse :\n";
    traversal(head);
    head=reverse(head);
    cout<<"After Reverse :\n";
    traversal(head);
    return 0;

}