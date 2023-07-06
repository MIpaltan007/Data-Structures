#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
void CountNodes(struct node *n){
    int count=0;
    if(n==0){
        printf("Linked List is empty\n");
    }
    struct node *ptr=NULL;
    ptr=n;
    while(ptr!=NULL){
        count=count+1;
        ptr=ptr->next;
    }
    printf("%d",count);
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
     CountNodes(head);
}
