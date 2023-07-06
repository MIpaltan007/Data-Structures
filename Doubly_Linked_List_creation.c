#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *prev;
    struct node *next;
};
void main(){
    struct node *head,*temp,*newnode;
    head=0;
    int choice,count=0;
    while(choice!=0){
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter Data\n");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(head==0){
            head=temp=newnode;
        }
        else{
            temp->next=newnode;
            newnode->prev=temp;
            temp=newnode;
        }
        printf("\n Do you want to continue?(0,1)\n");
        scanf("%d",&choice);
    }
    //Traversal//
    temp=head;
    while(temp!=0){
        printf("%d ",temp->data);
        temp=temp->next;
        count++;
    }
    printf("%d elements in DLL\n",count);
}