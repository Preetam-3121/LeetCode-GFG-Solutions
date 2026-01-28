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

struct node* merge(struct node * head1,struct node * head2){
    if (head1 == NULL || head2 == NULL) {
        return head1 == NULL ? head2 : head1;
    }

    if (head1->data <= head2->data) {
        head1->next = merge(head1->next, head2);
        return head1;
    } else {
        head2->next = merge(head1, head2->next);
        return head2;
    }
}

int main(){

    struct node *head1, *second, *third, *head2, *fifth, *sixth;
    
    head1=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    head2=(struct node*)malloc(sizeof(struct node));
    fifth=(struct node*)malloc(sizeof(struct node));
    sixth=(struct node*)malloc(sizeof(struct node));
    
    head1->data=10;
    head1->next=second;
    
    second->data=56;
    second->next=third;
    
    third->data=60;
    third->next=NULL;

    head2->data=40;
    head2->next=fifth;

    fifth->data=44;
    fifth->next=sixth;

    sixth->data=88;
    sixth->next=NULL;

    struct node* mergedList;
    mergedList=merge(head1,head2);
    linklist(mergedList);
    
    return 0;
}