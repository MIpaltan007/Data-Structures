#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};
void main(){
struct node *head,*newnode,*temp;
head=0;//initialy head is NULL//
int count=0;
int choice;
while(choice!=0){
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter data\n");
    scanf("%d",&newnode->data);
    newnode->next=0;
    if(head==0){
        head=temp=newnode;
    }
    else{
        temp->next=newnode;
        temp=newnode;
    }
    printf("Do you want to continue(0,1)?\n");
    scanf("%d",&choice);
}
//For Traversal//
temp=head;
while(temp!=0){
    printf("\n%d ",temp->data);
    temp=temp->next;
    count++;
}
printf("\nCount=%d",count);
}
