#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
void PrintList(struct node *n){
    while(n!=0){
        printf("%d ",n->data);
        n=n->next;
    }
}
void main(){
     struct node *head=0,*second=0,*third=0;
     head=(struct node*)malloc(sizeof(struct node));
     second=(struct node*)malloc(sizeof(struct node));
     third=(struct node*)malloc(sizeof(struct node));

     head->data=45;
     head->next=second;
     second->data=98;
     second->next=third;
     third->data=3;
     third->next=NULL;
     PrintList(head);
}